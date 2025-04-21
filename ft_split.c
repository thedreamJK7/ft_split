#include "ft.h"

char	**ft_split(char *str, char *charset)
{
    int cw;
    int i;
    char **ar;

    cw = ft_countwords(str, charset);
    ar = (char **)malloc(sizeof(char *) * (cw + 1));
    if (!ar)
        return NULL;
    i = 0;
    while (*str)
    {
        if (ft_issep(*str, charset))
            str++;
        if (*str && !ft_issep(*str, charset))
        {
            ar[i] = ft_malloc(str, charset);
            printf("%s\n", ar[i]);
            if (!ar[i])
            {
                free(ar[i]);
                return NULL;
            }
            i++;
            while (*str && !ft_issep(*str, charset))
                str++;
        }
    }
    ar[i] = NULL;
    return ar;
}