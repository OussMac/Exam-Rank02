#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putnbr(int nbr)
{
    if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
        ft_putchar(nbr + 48);
}

int main(int ac, char **av)
{
    int i = 1;
    int sum = 0;
    if (ac > 1)
    {
        while (av[i])
        {
            sum++;
            i++;
        }
        ft_putnbr(sum);
         write (1, "\n", 1);
    }
    else
        write (1, "0\n", 2);
    return (0);
}