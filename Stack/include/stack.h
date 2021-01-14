/* Github: https://github.com/Bacagine/Algorithms/Stack
 * 
 * stack.h: Functions and constants used in Stack Algorithm
 * 
 * Development by Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 * 
 * Date: 30/12/2020
 */

#ifndef _STACK_H
#define _STACK_H

#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define STACK_FULL  "Stack full!"
#define STACK_EMPTY "Stack empty!"

/* Top of stack */
static int top = -1;

/* Verify if stack is empty */
bool is_empty(void);

/* Verify if stack is full */
bool is_full(const int max_length);

/* Insert a new element on stack */
void push(int stack[], const int elemento);

/* Remove a element on stack */
int pop(int stack[]);

/* Show stack elements
 * Return -1 if stack is empty
 * and 0 if stack is not empty */
int show_stack(int stack[]);

#endif
