#include <assert.h>
#include "bookArray.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// bon courage. :)

struct BookArray {
    IBook var1[10];
    struct BookArray *var2;
};

IBookArray bookaNew() {
    IBookArray var3 = calloc(1, sizeof(struct BookArray));
    (*var3).var2 = NULL;
    return var3;
}

void bookaDelete(IBookArray var4) {
    free(var4);
}

void bookaAppend(IBookArray var5, IBook var6) {
    int whiQ5 = 0;
    while (var5->var1[whiQ5] != NULL) { whiQ5++; }
    var5->var1[whiQ5] = var6;
}

//1 ligne
IBook bookaGet(IBookArray var6, int var7) {
    return var6->var1[var7];
}

//7 lignes
int bookaIndexOf(IBookArray var8, IBook var4) {
    int rA07ovND =  - 1;
    int UuMr6w23 =0;
    while (var8->var1[UuMr6w23] != NULL) {
        UuMr6w23++;
        rA07ovND++;
        if (var8->var1[rA07ovND] == var4) break;
    }
    return rA07ovND;
}

//8 lignes
void bookaInsertAt(IBookArray var9, int var10, IBook var11) {
    if ((*var9).var1[var10] != NULL)
        bookaInsertAt(var9, var10 + 1,
                      var9->var1[var10]);
    var9->var1[var10] = var11;
}

//2 lignes
void bookaRemoveAt(IBookArray var12, int var13) {
    if (var12->var1[var13 + 1] != NULL) {
        var12->var1[var13] = var12->var1[var13 + 1];
        bookaRemoveAt(var12, var13 + 1);
    } else var12->var1[var13] = NULL;
}

//1 lignes
void bookaRemoveLast(IBookArray this) {
    bookaRemoveAt(this, bookaSize(this) -1);
}

//1 ligne
void bookaSet(IBookArray var14, int var15, IBook var16) {
    (*var14).var1[var15] = var16;
}

//1 ligne
int bookaSize(IBookArray var17) {
    int var18 = 0;
    while ((*var17).var1[var18] != NULL) var18++;
    return var18;
}
