void ft_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
int main()
{
	int	a;
	int	b;

	a = 9;
	b = 2;
	ft_div_mod(&a, &b);
	return (0);
}
*/
