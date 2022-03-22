#include <stdio.h>
#include <stdlib.h>
#include "_putchar.c"
#include "main.h"
#include "0-reset_to_98.c"
#include "1-swap.c"

void test_task_0(void)
{
    int *k;
    int j;
    k = &j;
    j = 10;
    printf("j before reset_to_98: %d\n", j);
    reset_to_98(k);
    printf("j after reset_to_98: %d\n", j);
}

void test_task_1(void)
{
    int *k, *j;
    int m = 10, n = 20;

    k = &m;
    j = &n;
    printf("m, n before reset_to_98: %d, %d\n", m, n);
    swap_int(k, j);
    printf("m, n before reset_to_98: %d, %d\n", m, n);
}

/*
 * main - Entry point of program
 * Description: For testing other programs in this project
 */
int main(void)
{
    test_task_1();
}