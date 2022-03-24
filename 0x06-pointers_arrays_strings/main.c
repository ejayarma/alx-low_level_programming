#include <stdio.h>
#include <stdlib.h>
#include "0-strcat.c"

int test_task_0(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    // printf("%s\n", s1);
    // printf("%s", s2);
    ptr = _strcat(s1, s2);
    // printf("%s", s1);
    // printf("%s", s2);
    printf("%s", ptr);
    return (0);
}

int test_task_1(void)
{
    ;
}

int test_task_2(void)
{
    ;
}

int test_task_3(void)
{
    ;
}

int test_task_4(void)
{
    ;
}

int test_task_5(void)
{
    ;
}

int test_task_6(void)
{
    ;
}

int test_task_7(void)
{
    ;
}

int test_task_8(void)
{
    ;
}

/*
 * main - Entry point of program
 * Description: For testing other programs in this project
 */
int main(void)
{
    test_task_0();
}