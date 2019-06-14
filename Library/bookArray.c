#include <assert.h>
#include "bookArray.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct BookArray {
    IBook tableauDeIBook[10];
    struct BookArray *pointeurDeBookArray;
};

IBookArray bookaNew() {
    IBookArray nouveauIbookArray = calloc(1, sizeof(struct BookArray));
    (*nouveauIbookArray).pointeurDeBookArray = NULL;
    return nouveauIbookArray;
}

void bookaDelete(IBookArray iBookArrayALiberer) {
    free(iBookArrayALiberer);
}

void bookaAppend(IBookArray iBookArrayArgument, IBook nouveauIBook) {
    int indice = 0;
    while (iBookArrayArgument->tableauDeIBook[indice] != NULL) { indice++; }
    iBookArrayArgument->tableauDeIBook[indice] = nouveauIBook;
}

IBook bookaGet(IBookArray argIBookArray, int indice) {
    return argIBookArray->tableauDeIBook[indice];
}

int bookaIndexOf(IBookArray iBookArrayArgument, IBook iBookArg) {
    int indiceARetourner =  - 1;
    int indice =0;
    while (iBookArrayArgument->tableauDeIBook[indice] != NULL) {
        indice++;
        indiceARetourner++;
        if (iBookArrayArgument->tableauDeIBook[indiceARetourner] == iBookArg) break;
    }
    return indiceARetourner;
}

void bookaInsertAt(IBookArray iBookArrayArgument, int indice, IBook newIBook) {
    if ((*iBookArrayArgument).tableauDeIBook[indice] != NULL)
        bookaInsertAt(iBookArrayArgument, indice + 1,
                      iBookArrayArgument->tableauDeIBook[indice]);
    iBookArrayArgument->tableauDeIBook[indice] = newIBook;
}

void bookaRemoveAt(IBookArray iBookArrayArgument, int indice) {
    if (iBookArrayArgument->tableauDeIBook[indice + 1] != NULL) {
        iBookArrayArgument->tableauDeIBook[indice] = iBookArrayArgument->tableauDeIBook[indice + 1];
        bookaRemoveAt(iBookArrayArgument, indice + 1);
    } else iBookArrayArgument->tableauDeIBook[indice] = NULL;
}

void bookaRemoveLast(IBookArray this) {
    bookaRemoveAt(this, bookaSize(this) -1);
}

void bookaSet(IBookArray iBookArrayArgument, int indice, IBook newIBook) {
    (*iBookArrayArgument).tableauDeIBook[indice] = newIBook;
}

int bookaSize(IBookArray iBookArrayArgument) {
    int indice = 0;
    while ((*iBookArrayArgument).tableauDeIBook[indice] != NULL) indice++;
    return indice;
}
