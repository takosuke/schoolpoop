int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;	
	}
	return (len);
}
/*
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("Length of %s: %d", argv[1], ft_strlen(argv[1]));
	}
	return (0);
}
*/
