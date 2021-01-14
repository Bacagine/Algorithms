/* Github: https://www.github.com/Bacagine/Algorithm/Recursion
 * 
 * main.c: Implematating a fibonacci recursive algorithm
 * 
 * Development by Gustavo Baagine <gustavo.bacagine@protonmail.com>
 * 
 * Date: 30/12/2020
 */

#include <stdio.h>
#include "../include/fibonacci.h"

int main(void){
    int number = 0;
    
    printf("Please, write a number for calculate your fibonacci value: ");
    scanf("%d", &number);
    
    printf("Fibonacci of %d = %lu\n", number, fibonacci(number));
    
    return 0;
}
