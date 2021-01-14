/* Github: https://www.github.com/Bacagine/Algorithm/Recursion
 * 
 * fibonacci.c: Implematation a fibonacci algorithm with recusive function
 * 
 * Development by Gustavo Baagine <gustavo.bacagine@protonmail.com>
 * 
 * Date: 30/12/2020
 */

#include "../include/fibonacci.h"

long fibonacci(int number){
    if(number == 0){
        return 0;
    }
    else if(number == 1 || number == 2){
        return 1;
    }
    else{
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}
