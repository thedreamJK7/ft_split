#include "ft.h"

int	ft_countwords(char *str, char *sep)
{
	int	count = 0;

	while(*str)
	{
		if(ft_issep(*str, sep))
			str++;
		if(*str && !ft_issep(*str, sep))
		{
			count++;
			while (*str && !ft_issep(*str, sep))
			{
				str++;
			}
		}
	}
	return count;
}
