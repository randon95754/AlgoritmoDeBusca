#include <stdio.h>
#include "busca_binaria.h"
#include "busca_seq_ordenada.h"
#include "recursao.h"

#define RUN_TEST(name, expr, expected) \
    do { \
        int result = expr; \
        if (result == expected) { \
             printf("[OK] %s\n", name); \
        } else { \
            printf("[ERRADO] %s: esperado %d, obtido %d\n", name, expected, result); \
        } \
    } while (0)

 int main() {
    RUN_TEST("Primeira versao com erro", busca_binaria(5), 4);

    int arr1[] = {4, 2, 1, 4, 2, 1};
     RUN_TEST("Especialidades distintas (ex1)", conta_especialidades_distintas(arr1, 6), 3);

     RUN_TEST("Recursiva", recursao("banana", 'a'), 3);

    return 0;
}
