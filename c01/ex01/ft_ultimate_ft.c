void ft_ultimate_ft(int *********nbr)
{
	int n;
	int	*p;
	int	**p_p;
	int	***p_p_p;
	int	****p_p_p_p;
	int *****p_p_p_p_p;
	int ******p_p_p_p_p_p;
	int *******p_p_p_p_p_p_p;
	int ********p_p_p_p_p_p_p_p;

	n = 42;
	p = &n;
	p_p = &p;
	p_p_p = &p_p;
	p_p_p_p = &p_p_p;
	p_p_p_p_p = &p_p_p_p;
	p_p_p_p_p_p = &p_p_p_p_p;
	p_p_p_p_p_p_p = &p_p_p_p_p_p;
	p_p_p_p_p_p_p_p = &p_p_p_p_p_p_p;
	nbr = &p_p_p_p_p_p_p_p;
}

/*
int main(void)
{
	int	*********nbr;

	ft_ultimate_ft(nbr);
	return (0);
}
*/
