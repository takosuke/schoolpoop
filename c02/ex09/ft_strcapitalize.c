#include <stdio.h>
#include <stdlib.h>

char  *ft_strcapitalize(char *str)
{
	char *start_str;
	
	start_str = str;
	if (*str > 96 && *str < 123)
	{
		*str = *str - 32;
	}
	while (*str != '\0')
	{
		if (*str == 32)
		{
			if (*(str + 1) > 96 && *(str + 1) < 123)
			{
				*(str + 1) = *(str + 1) - 32;
			}
		}
		str++;
	}
	return (start_str);
} 

int		main(void)
{
	char str[] = "papas fritas Con tomate   frito    Yy    maYOnesa";

	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}

	





