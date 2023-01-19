#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - multiplies two positive numbers.
* @argc: number of arguments
* @argv: the values in each argc element
*
* Description: its like infinite add but with multiplication
* Return: print the result. return 0 if success
*/

int is_valid_num(char* num);
long long multiply(long long num1, long long num2);

int main(int argc, char* argv[])
{
    if (argc != 3) {
        printf("Error\n");
        exit(98);
    }

    if (!is_valid_num(argv[1]) || !is_valid_num(argv[2])) {
        printf("Error\n");
        exit(98);
    }

    long long num1 = atoll(argv[1]);
    long long num2 = atoll(argv[2]);
    long long result = multiply(num1, num2);
    printf("%lld\n", result);
    return 0;
}

int is_valid_num(char* num) {
    for (int i = 0; i < strlen(num); i++) {
        if (!isdigit(num[i])) {
            return 0;
        }
    }
    return 1;
}

long long multiply(long long num1, long long num2) {
    return num1 * num2;
}

