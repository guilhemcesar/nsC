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
    IBook _0xb34519[0b00001010];
    struct BookArray *aGuhyoaIeawjCrqEnIqj;
};

IBookArray bookaNew() {
    IBookArray PJU3A5SyFt7FRR3JoRRA = calloc(1, sizeof(struct BookArray));
    (*PJU3A5SyFt7FRR3JoRRA).aGuhyoaIeawjCrqEnIqj = NULL;
    return PJU3A5SyFt7FRR3JoRRA;
}

void bookaDelete(IBookArray vFrHnDaB8j9riC3ZrGDA) {
    free(vFrHnDaB8j9riC3ZrGDA);
}

void bookaAppend(IBookArray OWoBWpiptHwNh491gY38, IBook fJgdXHalMfeAVFwePOoI) {
    int whiQ5 = 0;
    while (OWoBWpiptHwNh491gY38->_0xb34519[whiQ5] != NULL) { whiQ5++; }
    OWoBWpiptHwNh491gY38->_0xb34519[whiQ5] = fJgdXHalMfeAVFwePOoI;
}

//1 ligne
IBook bookaGet(IBookArray fJgdXHalMfeAVFwePOoI, int smIdh8p47l23w2dzqR2m) {
    return fJgdXHalMfeAVFwePOoI->_0xb34519[smIdh8p47l23w2dzqR2m];
}

//7 lignes
int bookaIndexOf(IBookArray qGnvGE3P7vC2hbPRDU9f, IBook vFrHnDaB8j9riC3ZrGDA) {
    int rA07ovND = 0x64 - 0b01100101;
    int UuMr6w23 = 0xDDA - 0x9C4 - 0b0000010000010110;
    while (qGnvGE3P7vC2hbPRDU9f->_0xb34519[UuMr6w23] != NULL) {
        UuMr6w23++;
        rA07ovND++;
        if (qGnvGE3P7vC2hbPRDU9f->_0xb34519[rA07ovND] == vFrHnDaB8j9riC3ZrGDA) break;
    }
    return rA07ovND;
}

//8 lignes
void bookaInsertAt(IBookArray IRIVKuTocuyRmslTFppt, int m1MxkHkriTc9d1xwVcV5, IBook ZFJA89yD3jf8Dd8LoTBQ) {
    if ((*IRIVKuTocuyRmslTFppt)._0xb34519[m1MxkHkriTc9d1xwVcV5] != NULL)
        bookaInsertAt(IRIVKuTocuyRmslTFppt, m1MxkHkriTc9d1xwVcV5 + 1,
                      IRIVKuTocuyRmslTFppt->_0xb34519[m1MxkHkriTc9d1xwVcV5]);
    IRIVKuTocuyRmslTFppt->_0xb34519[m1MxkHkriTc9d1xwVcV5] = ZFJA89yD3jf8Dd8LoTBQ;
}

//2 lignes
void bookaRemoveAt(IBookArray Qszlq20FJ8lioMWKmSmN, int XW72Jqx74hZ0CDSHPlaD) {
    if (Qszlq20FJ8lioMWKmSmN->_0xb34519[XW72Jqx74hZ0CDSHPlaD + 1] != NULL) {
        Qszlq20FJ8lioMWKmSmN->_0xb34519[XW72Jqx74hZ0CDSHPlaD] = Qszlq20FJ8lioMWKmSmN->_0xb34519[XW72Jqx74hZ0CDSHPlaD +
                                                                                                1];
        bookaRemoveAt(Qszlq20FJ8lioMWKmSmN, XW72Jqx74hZ0CDSHPlaD + 1);
    } else Qszlq20FJ8lioMWKmSmN->_0xb34519[XW72Jqx74hZ0CDSHPlaD] = NULL;
}

//1 lignes
void bookaRemoveLast(IBookArray this) {
    bookaRemoveAt(this, bookaSize(this) + (0x64 - 0b01100101));
}

//1 ligne
void bookaSet(IBookArray holifk42OfsXgildz0fH, int Kamn0mBEjMZOejL8ZJKX, IBook IpI9AbgNGY1DNWO5UB8M) {
    (*holifk42OfsXgildz0fH)._0xb34519[Kamn0mBEjMZOejL8ZJKX] = IpI9AbgNGY1DNWO5UB8M;
}

//1 ligne
int bookaSize(IBookArray bANSX) {
    int etJ6GW = 0;
    while ((*bANSX)._0xb34519[etJ6GW] != NULL) etJ6GW++;
    return etJ6GW;
}
