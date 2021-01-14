/* Github: https://github.com/Bacagine/Algorithms/Stack
 * 
 * stack.c: Implementing the Stack Algorithm in C
 * 
 * Development by Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 * 
 * Date: 30/12/2020
 */

#include <stdio.h>
#include "../include/stack.h"

bool is_empty(void){
    return top == -1;
}

bool is_full(const int max_length){
    return top == max_length-1;
}

void push(int stack[], const int elemento){
    stack[++top] = elemento;
}

int pop(int stack[]){
    return stack[top--];
}

int show_stack(int stack[]){
    if(is_empty()){
        return top;
    }
    else{
        int i;
        for(i = 0; i < top+1; i++){
            printf("Element %d = %d\n", i+1, stack[i]);
        }
        return 0;
    }
}
