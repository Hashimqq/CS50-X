#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    long number = get_long("Number: ");

    char str[20];

    sprintf(str, "%li", number);

    long length = strlen(str);

    char first_digit = str[0];
    char second_digit = str[1];

    if ((first_digit == '3' && second_digit == '4' && length == 15) || (first_digit == '3' && second_digit == '7' && length == 15))
    {
        printf("AMEX\n");
    }
    else if ((first_digit == '5' && second_digit == '1' && length == 16) ||
             (first_digit == '5' && second_digit == '2' && length == 16) ||
             (first_digit == '5' && second_digit == '3' && length == 16) ||
             (first_digit == '5' && second_digit == '4' && length == 16) ||
             (first_digit == '5' && second_digit == '5' && length == 16))
    {
        printf("MASTERCARD\n");
    }
    else if ((first_digit == '4') && (length == 13 || length == 16))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}