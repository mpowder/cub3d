#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (!needle[j] && !haystack[i + j])
				return ((char *)haystack + i);
			j++;
		}
		if (!needle[j])
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
