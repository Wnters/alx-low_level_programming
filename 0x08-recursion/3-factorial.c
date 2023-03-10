#include "main.h"
#include <stdio.h>


/**
* factorial - calculate factorial of a number
*
* @num : the number whose factorial to be calculated
*
* Return: result
*/
int factorial(int num){
    if(num < 0){
        return -1;
    }
    if(num == 0){
        return 1;
    }

    return num * factorial(num - 1);

}


/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
int r;

r = factorial(1);
printf("%d\n", r);
r = factorial(5);
printf("%d\n", r);
r = factorial(10);
printf("%d\n", r);
r = factorial(-1024);
printf("%d\n", r);
return (0);
}
