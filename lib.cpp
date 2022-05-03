//
// Created by gasta on 03/05/2022.
//

#include "lib.h"

bool lettere(int a) {
    if (((a>=65)&&(a<=90))||(a>=97)&&(a<=122)) {
        return true;
    } else {
        return false;
    }
}

char conversione (int a) {
    char operazione;
    if ((a>=65)&&(a<=90)) {
        operazione=a+32;
        return operazione;
    } else if ((a>=97)&&(a<=122)) {
        operazione=a-32;
        return operazione;
    }
}
