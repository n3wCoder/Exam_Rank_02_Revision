#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;
	int	len = 0;
	while (str[i])
	{
		i++;
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char *dst = NULL;
	int		i = 0;
	int		src_len = ft_strlen(src);

	dst = (char *)malloc(sizeof(char) * (src_len + 1)); 
// malloc returns a pointer, need to be done this way.
	if (!dst)
		return (NULL); // Check if malloc failed

	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0'; // Null-terminate the string
	return (dst);
}

/*int main()
{
	char *str1 = "string";
	char *dup_str = ft_strdup(str1);

	if (dup_str)
	{
		printf("%s\n", dup_str);
		free(dup_str); // Free the allocated memory
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return 0;
}*/
