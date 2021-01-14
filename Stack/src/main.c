/* Github: https://github.com/Bacagine/Algorithms/Stack
 * 
 * main.c: Test of stack algorithm
 * 
 * Development by Gustavo Baagine <gustavo.bacagine@protonmail.com>
 * 
 * Date: 30/12/2020
 */

#include <stdio.h>
#include "../include/stack.h"

int main(void){
    int length;
    
    printf("Please, write the length of stack: ");
    scanf("%d", &length);
    
    int *stack = (int *) malloc(length * sizeof(int));
    
    printf("The stack is: %s\n", is_full(length) == false ? "empty" : "full");
    
    /* Generating stack */
    srand(time(NULL));
    for(int i = 0; i < length; i++){
        push(stack, rand() % 10);
    }
    
    if(show_stack(stack) == -1){
        puts(STACK_EMPTY);
    }
    
    printf("The stack is: %s\n", is_full(length) == true ? "full" : "empty");
    
    /* Poping all stack elements */
    for(int i = 0; i < length; i++){
        printf("%d is poped\n", pop(stack));
    }
    
    if(show_stack(stack) == -1){
        puts(STACK_EMPTY);
    }
    
    free(stack);
    stack = NULL;
    
    return 0;
}
