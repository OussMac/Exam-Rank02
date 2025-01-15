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

    temp = n - 1;
    if (n <= 1)
        return (0);
    if (n == 2)
        return (1);
    if (n % 2 == 0)
        return (0);
    while (temp > 2)
    {
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