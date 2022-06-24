#include <stdio.h>
#include <stdlib.h>
/**
 * write a program that adds positive numbers using argc and argv
 * print result followed by new line
 * if no arguments are given, print 0 followed by new line
 * if any argument is not a number, print "Error" followed by new line and return 1.
 * 
 * 
 */
int main(int argc, char *argv[])
{
    int i;
    int sum = 0;
    for (i = 1; i < argc; i++)
    {
        int num = atoi(argv[i]);
        if (num < 0)
        {
            printf("Error\n");
            return 1;
        }
        sum += num;
    }
    printf("%d\n", sum);
    return 0;
}