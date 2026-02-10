#include <unistd.h>

void	ft_putstr_nl(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while(s1[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		while(j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[i] = temp;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr_nl(argv[1]);
	}
	return (0);
}
