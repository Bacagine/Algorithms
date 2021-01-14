/* Github: https://github.com/Bacagine/Algorithms/
 * 
 * main.c: Testing of Bubble ALgorithm
 * 
 * Development by Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 * 
 * Date: 30/12/2020
 */

#include <stdio.h>
#include "../include/bubble.h"

int main(void){
    int length = 5;
    int *arr = (int *) malloc(length * sizeof(int));
    
    generate_array(arr, length);
    printf("Before of bubble: ");
    show_arr(arr, length);
    bubble(arr, length);
    printf("After of bubble: ");
    show_arr(arr, length);
    
    free(arr);
    arr = NULL;
    
    return 0;
}
