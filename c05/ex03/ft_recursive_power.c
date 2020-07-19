int ft_recursive_power(int nb, int power)
{
    int num;

    num = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
    num = nb * ft_recursive_power(nb, power - 1);
	return (num);
}