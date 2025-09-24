#include "recursao.h"

int recursao(const char *str, char alvo) {
    if (*str == '\0') return 0;
    return (*str == alvo) + recursao(str + 1, alvo);
}
