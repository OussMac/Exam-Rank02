

int max(int *tab, unsigned int len)
{
    int max = 0;
    unsigned int i = 0;
    while (i < len)
    {
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max);
}
// #include <stdio.h>

// int main ()
// {
//     int tab[7] = {1, -1, 4, 2, 9, 2, -10};
//     printf("%d\n", max(tab, 7));
//     return (0);
// }