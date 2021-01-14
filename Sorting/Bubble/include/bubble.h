/* Github: https://github.com/Bacagine/Algorithms/Sorting
 * 
 * bubble.h: Functions used in Bubble Algorithm
 * 
 * Development by Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 * 
 * Date: 30/12/2020
 */

#ifndef _BUBBLE_H
#define _BUBBLE_H

#include <stdlib.h>
#include <time.h>

/* Swap the first parameter
 * with the second parameter */
void swap(int *n1, int *n2);

/* Sorting a array passed as
 * first parameter */
void bubble(int arr[], int length);

/* Generate a array */
void generate_array(int arr[], int length);

/* Show the array */
void show_arr(int arr[], int length);

#endif
