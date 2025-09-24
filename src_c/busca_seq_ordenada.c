#include "busca_seq_ordenada.h"

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                 arr[j + 1] = temp;
            }
        }
    }
}

int busca_seq_ordenada(int arr[], int n, int alvo) {
    for (int i = 0; i < n; i++) {
         if (arr[i] == alvo) return i;
        if (arr[i] > alvo) return -1;
    }
    return -1;
}

int conta_especialidades_distintas(int arr[], int n) {
    bubble_sort(arr, n);
    int cont = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
             cont++;
        }
    }
    return cont;
}