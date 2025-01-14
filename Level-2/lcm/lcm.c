
unsigned int lcm (unsigned int a, unsigned int b)
{
    int max;
    if (a > b)
        max = a;
    else
        max = b;
    if (a == 0 || b == 0)
        return (0);
    while (1)
    {
        if (max % a == 0 && max % b == 0)
            return (max);
        max++;
    }
}

// #include <stdio.h>

// int main (void)
// {    
//     printf("%u\n", lcm(1, 2));
//     return (0);
// }