#include "libft.h"

void	ft_strcat(char *dst, char *src)
{
	int i;

	i = 0;
	if (!dst || !src)
		return ;
	while (dst[i])
		i++;
	while (*src)
	{
		dst[i] = *src;
		i++;
		src++;
	}
}
