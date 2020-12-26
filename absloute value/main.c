/* Find the absolute value of a number entered through the
keyboard.
Author Majid Mujahid Hussain dated 24/December/2020. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0; //absolute_number;
    printf("Hello world!\n");
    printf("\nPlease enter the number: \n");
    scanf("%d", &number);

    //absolute value of a negative number is a positive number.
    if( number < 0 )
    {
//        absolute_number = (number) * -1;
        printf("\n The Absolute value of number '%d' is equal to '%d' \n ", number, number * -1);
    }
    else
    {
          printf("\n The Absolute value of number '%d' is equal to '%d' \n ", number, number);
    }
    return 0;
}
