#include <stdio.h>
#include <stdlib.h>
#include "_putchar.c"
#include "0-reset_to_98.c"
#include "1-swap.c"
#include "2-strlen.c"
#include "3-puts.c"
#include "4-print_rev.c"
#include "5-rev_string.c"
#include "6-puts2.c"
#include "7-puts_half.c"
#include "8-print_array.c"
#include "9-strcpy.c"

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

void test_task_2(void)
{
    int l;
    char str[] = "Hello World";
    l = _strlen(str);
    printf("The length of string '%s' is: %d", str, l);
}

void test_task_3(void)
{
    char *p;
    int l;
    char str[] = "Hello World";
    _puts(str);
}

void test_task_4(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
}

void test_task_5(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
}

void test_task_6(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
}

void test_task_7(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
}

void test_task_8(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
}

void test_task_9(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
}

/*
 * main - Entry point of program
 * Description: For testing other programs in this project
 */
int main(void)
{
    test_task_9();
    return (0);
}