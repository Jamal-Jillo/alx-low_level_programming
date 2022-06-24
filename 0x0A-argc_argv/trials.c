#include <stdio.h>
#include <stdlib.h>
/**
 * Write a program that prints the minimum number of coins to make change for an amount of money.
 * Usage: ./change cents
 * where cents is the amount of cents you need to give back
 * if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
 * you should use atoi to parse the parameter passed to your program
 * If the number passed as the argument is negative, print 0, followed by a new line
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 * 
 * 
 */
int main(int argc, char *argv[])
{
    int cents;
    if (argc != 1)
    {
        printf("Error\n");
        return 1;
    }
    cents = atoi(argv[1]);
    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }
    int coins[5] = {25, 10, 5, 2, 1};
    int i;
    int count = 0;
    for (i = 0; i < 5; i++)
    {
        while (cents >= coins[i])
        {
            cents -= coins[i];
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

