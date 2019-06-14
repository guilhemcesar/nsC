/*#define IBookArray IBookArray
#define BookArray BookArray
#define { {
#define } }
#define bookaInsertAt bookaInsertAt
#define void void
#define if if
#define int int
#define bookaInsertAt bookaInsertAt
#define ; ;
#define NULL NULL
#define (  (
#define else else
#define * *
#define int int
#define * *
#define 0 0
#define } ; }
#define return return
#define )  )
#define int int
#define if if
#define = =
#define = =
#define struct struct
#define IBook IBook
#define ) )
#define sizeof sizeof
#define else else
#define while while
#define while while
#define return return
#define bookaIndexOf bookaIndexOf
#define IBookArray IBookArray
#define = =
#define bookaRemoveAt bookaRemoveAt
#define ; ;
#define return return
#define bookaRemoveAt bookaRemoveAt
#define bookaNew bookaNew
#define = =
#define return return
#define bookaSize bookaSize
#define ; ;
#define IBookArray IBookArray*/

#include <assert.h>
#include "bookArray.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// bon courage. :)

struct BookArray {
    IBook var1[0b00001010];
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
    int UuMr6w23 = 0xDDA - 0x9C4 - 0b0000010000010110;
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
    bookaRemoveAt(this, bookaSize(this) + (0x64 - 0b01100101));
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
