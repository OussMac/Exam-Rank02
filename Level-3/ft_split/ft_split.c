#include <stdlib.h>

int  ft_wc(char *str)
{
    int count = 0;
    int i = 0;
    while(str[i])
    {
        while (str[i] == ' ' && str[i])
            i++;
        if (str[i] != ' ' && str [i]) // la drbna chi7aja makantch space o kant null terminator fnafs lw9t
            count++;
        while (str[i] != ' ' && str [i])
            i++;
    }
    return (count);
}

char    *ft_substr(char *str,int start, int len)
{
    int i = 0;
    char *sub;
    sub = (char *) malloc (sizeof(char) * (len + 1));
    if (!sub)
        return (NULL);
    while (i < len)
    {
        sub[i] = str[start + i];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}



char    **ft_split(char *str)
{
    char **list;

    int wc = ft_wc(str);
    list = (char **) malloc (sizeof(char *) * (wc + 1));


    int i = 0;
    int j = 0;

    int start = 0;
    int end = 0;
    while(str[i])
    {
        while (str[i] == ' ' && str[i])
            i++;
        if (str[i] != ' ')
        {
            if (!str [i])
                break;
            start = i;
        }
        while (str[i] != ' ' && str [i])
            i++;
        end = i;
        list[j++] = ft_substr(str, start, end - start);
    }
    list[j] = NULL;
    return (list);
}




// #include <stdio.h>
// int main(void)
// {
//     char *str = "oussmac is dope"   ;
//     char **lst = ft_split(str);

//     //test actual list
//     for (int i = 0; lst[i]; i++)
//     {
//         printf("=== > %s\n", lst[i]);
//         free (lst[i]);
//     }
//     free(lst);


//     // wc test
//     printf("%d\n", ft_wc(str));

//     // sub test
//     printf("%s\n", ft_substr(str, 3, 7));
//     return(0);
// }