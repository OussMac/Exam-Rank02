#include <stdlib.h>
#include <stdio.h>

int ft_abs(int num)
{
    if (num < 0)
        num *= -1;
    return (num);
}


int *ft_range(int start, int end)
{
    int i = 0;
    int len = ft_abs(end - start);
    int *tab;
    tab = (int *) malloc (sizeof(int) * len);
    if (!tab)
        return (NULL);
    if (end - start > 0)
    {
        while (i < len + 1)
        {
            tab[i] = start;
            i++;
            start++; 
        }
    }
    else
    {
        while (i < len + 1)
        {
            tab[i] = start;
            i++;
            start--; 
        }
    }
    return (tab);
}


// int main(void)
// {
//     int s = 1;
//     int e = 3;
//     int *tab = ft_range(s, e);
//     int len = ft_abs(e - s);
//     int i = 0;

//     while (i < len + 1)
//     {
//         printf("%d\n", tab[i]);
//         i++;
//     }
//     return (0);
// }

