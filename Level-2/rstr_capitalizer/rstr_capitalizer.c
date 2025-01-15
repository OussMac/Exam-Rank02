#include <unistd.h>

void    decap(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
}

int is_lower(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    else
        return (0);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
    {
        if ((str[i ] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0') && is_lower(str[i])) )
            ft_putchar(str[i] - 32);
        else
            ft_putchar(str[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 1;
    if (ac > 1)
    {
        while (i < ac)
        {
            decap(av[i]);
            ft_putstr(av[i]);
            ft_putchar('\n');
            i++;
        }
    }
    else
        ft_putchar('\n');
    return (0);
}