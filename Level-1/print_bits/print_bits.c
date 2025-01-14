#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    print_bits(unsigned char octet)
{
    int i = 0;
    char bytes[8];

    while (octet > 0)
    {
        bytes[i++] = octet % 2; 
        octet /= 2; // moves to the next number/bit
    }
    while (i < 8)
    {
        bytes[i] = 0; 
        i++;
    }
    i--;
    while (i >= 0)
    {
        ft_putchar(bytes[i] + 48);
        i--;
    }

}

// #include <stdio.h>
// int main (void)
// {
//     print_bits(255);
//     return (0);
// }