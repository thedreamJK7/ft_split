#include "ft.h"

char	*ft_malloc(char *str, char *sep)
{
    int lenw;
    char *strcpy;
    int i;

    lenw = 0;
    while (str[lenw] && !ft_issep(str[lenw], sep))
        lenw++;
    strcpy = malloc(sizeof(char) * (lenw + 1));
    if (!strcpy)
        return NULL;
    i = 0;
    while (lenw > i)
    {
        strcpy[i] = str[i];
        i++;
    }
    strcpy[i] = '\0';
    return strcpy;
}