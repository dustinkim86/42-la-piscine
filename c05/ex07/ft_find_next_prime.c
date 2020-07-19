int ft_find_next_prime(int nb)
{
    long int i;

    i = 1;
    if (nb <= 1)
        return (3);
    while (++i < nb)
    {
        
    }

}

#include <stdio.h>
int main()
{
    printf("%d\n", ft_find_next_prime(-2));
	printf("%d\n", ft_find_next_prime(24));
	printf("%d\n", ft_find_next_prime(29));
	printf("%d\n", ft_find_next_prime(2147483629));
	printf("%d\n", ft_find_next_prime(2147483630));
}