#include "busca_binaria.h"

int bad = 4;
int isBadVersion(int version) {
    return version >= bad;
}

int busca_binaria(int n) {
    int esquerda = 1, direita =  n;
    int res = n;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        if (isBadVersion(meio)) {
            res = meio;
            direita =  meio - 1;
        } else {
                esquerda = meio + 1;
        }
    }
    return res;
}
