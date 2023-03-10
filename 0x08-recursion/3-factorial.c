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
