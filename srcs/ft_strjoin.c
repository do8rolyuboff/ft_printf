#include "../include/ft_printf.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*tmp;
	char	*tmp_return;

	i = 0;
	j = 0;
	if (s1 && s2)
	{
		if (!(tmp = (char *)malloc((ft_strlen(s1)
			+ ft_strlen(s2) + 1) * sizeof(char))))
			return (NULL);
		tmp_return = tmp;
		while (*s1 != '\0')
			*tmp++ = *s1++;
		while (*s2 != '\0')
			*tmp++ = *s2++;
		*tmp = '\0';
		return (tmp_return);
	}
	return (NULL);
}
