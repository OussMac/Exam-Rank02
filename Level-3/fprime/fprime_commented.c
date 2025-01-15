#include <stdlib.h>
#include <stdio.h>

int is_even(int n)
{
    if (n % 2 == 0)
        return (1);
    else
        return (0);
}

int is_prime(int n)
{
    int temp;

    // og number - 1 so we dont divide it by itself.
    temp = n - 1;
    // check if number is 1 - 0 - negative
    if (n <= 1)
        return (0);
    // check if it's 2 special case in pair numbers, cuz 2 is only divisble by 1 and itself
    if (n == 2)
        return (1);
    // check if it's pair, cuz pairs are composite numbers that are written as 2 * k, where k is a poistive integer
    if (n % 2 == 0)
        return (0);
    // loop and reduce the number until it is equal to 2, and divise the original from it original number % (og number--) == 0
    // if it's divisible by a number in the loop, then it is a composite number, not a prime.
    while (temp > 2)
    {
        // if any number produced a remainder == 0 return 0, its a composite not a prime
        if (n % temp == 0)
            return (0);
        temp--;
    }
    return (1);
}

int next_prime(int prime)
{
    while (1)
    {
        prime++;
        if (is_prime(prime))
            return (prime);
    }
}

void fprime(int num)
{
    int divisor;
    divisor = 2;

    if (num == 1)
        printf("1");
    while (divisor <= num)
    {
        if (num % divisor == 0)
        {
            printf("%d", divisor);
            num /= divisor;
            if ((divisor <= num))
                printf("*");
        }
        else
            divisor = next_prime(divisor);
    }
}

int main(int ac, char **av)
{
    int ip= -1;
    int ie= -1;
    if (ac == 2)
    {
        fprime(atoi(av[1]));
    }
    printf("\n");
    return(0); 
}