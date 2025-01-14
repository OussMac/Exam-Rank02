
#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end) // 1 5 --> 5 4 3 2 1
{
    int i = 0;
    int *tab;
    int len = end - start;
    if (len < 0)
        len *= -1;
    tab = (int *) malloc (sizeof(int) * (len + 1));
    if (!tab)
        return (NULL);
    if (end - start > 0)
    {
        i = 0;
        len += 1;
        while (i < len)
        {
            tab[i] = end;
            end--;
            i++;
        }
        // tab[i] = 0;
    }
    else
    {
        i = 0;
        len += 1;
        while (i < len)
        {
            tab[i] = end;
            end++;
            i++;
        }
        // tab[i] = 0;
    }
    return (tab);
}


// int main(void)
// {
//     int *tab;
//     int start = -1;
//     int end = 2;
//     int len = end - start;
//     if (len < 0)
//         len *= -1;
//     tab = ft_rrange(start, end);
//     for (int i = 0; i < len + 1; i++)
//     {
//         printf("%d\n", tab[i]);
//     }
    
//     printf("");
//     return (0);
// }