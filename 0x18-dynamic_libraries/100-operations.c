#include <stdio.h>

/**
 * add - provides the sum of two numbers
 * @a: The left number
 * @b: The right number

 * Return: Result
 *       */
int add(int a, int b)
{
    return (a + b);
}

/**
 * add - provides the subtraction of two numbers
 * @a: The left number
 * @b: The right number
 * 
 * Return: Result
 *       */
int sub(int a, int b)
{
    return (a - b);
}

/**
 * add - provides the multiplication of two numbers
 * @a: The left number
 * @b: The right number
 * 
 * Return: Result
 *       */
int mul(int a, int b)
{
    return (a * b);
}

/**
 * add - provides the division of two numbers
 * @a: The left number
 * @b: The right number
 * 
 * Return: Result
 *       */
int div(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return (0);
    }
    return (a / b);
}


/**
 * add - provides the remainder of a number
 * @a: The left number
 * @b: The right number
 * 
 * Return: Result
 *       */
int mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return (0);
    }
    return (a % b);
}
