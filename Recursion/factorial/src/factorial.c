/* Github: https://www.github.com/Bacagine/Algorithms/Sorting
 * 
 * factorial.c: 
 * 
 * Development by Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 * 
 * Date: 30/12/2020
 */

#include <stdio.h>

long factorial(int number){
    if(number == 1 || number == 0){
        return 1;
    }
    else{
        return number * factorial(number - 1);
    }
}
