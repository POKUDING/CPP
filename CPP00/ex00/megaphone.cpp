#include <iostream>

char	*ToUpper(char *c)
{
	int	i;

	i = -1;
	while (c && c[++i])
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] += 'A' - 'a';
	}
	return (c);
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while(*++av)
	{	
		std::cout << ToUpper(*av);
	}
	std::cout << std::endl;
	return (0);
}