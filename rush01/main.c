#include <unistd.h>

int		solve(int grid[4][4], int consts[16], int pos);

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	print_grid(int grid[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		parse_args(char *str, int consts[16])
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (str[i] < '1' || str[i] > '4')
				return (0);
			consts[i / 2] = str[i] - '0';
		}
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	int grid[4][4] = {{0}};
	int consts[16];

	if (argc != 2 || !parse_args(argv[1], consts))
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (solve(grid, consts, 0))
		print_grid(grid);
	else
		ft_putstr("Error\n");
	return (0);
}
