/* Github: https://github.com/Bacagine/Algorithms/Sorting
 * 
 * bubble.c: Implementing Bubble Algorithm in C
 * 
 * Development by Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 * 
 * Date: 30/12/2020
 */

#include <stdio.h>
#include "../include/bubble.h"

void swap(int *n1, int *n2){
    int aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

void bubble(int arr[], int length){
    int i, j;
    /* Walks the array */
    for(i = 0; i < length; i++){
        if(arr[i] >= arr[i+1]){
            swap(&arr[i], &arr[i]);
        }
    }
}

void generate_arr(int arr[], int length){
    int i;
    srand(time(NULL));
    for(i = 0; i < length; i++){
        arr[i] = rand() % 10;
    }
}

void show_arr(int arr[], int length){
    int i;
    for(i = 0; i < length-1; i++){
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[i]);
}
