#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int	ft_countwords(char *str, char *sep);
int ft_issep(char c, char *sep);
char	*ft_malloc(char *str, char *sep);
char	**ft_split(char *str, char *charset);

#endif
