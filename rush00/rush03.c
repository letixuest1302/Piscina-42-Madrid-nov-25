// Declares the prototype of the 'ft_putchar' function
void	ft_putchar(char c);

// This function runs through the columns
void	ft_print(int columns, char first, char between, char last)
{
	int	i;

	i = 1;
	// while the counter is less than or equal to the columns
	while (i <= columns)
	{
		// If it's in the first column, print the first char
		if (i == 1)
			ft_putchar(first);
		// If it's in the last column, print the last char
		else if (i == columns)
			ft_putchar(last);
		// If it's in the middle, print 'between'
		else
			ft_putchar(between);
		i++;
	}
	// Prints a new line at the end
	ft_putchar('\n');
}

// This function runs through the lines
void	rush(int x, int y)
{
	int	i;
	int	column;
	int	line;

	i = 1;
	column = x;
	line = y;
	// If the column and the line are greater than or equal to 1
	if (column >= 1 && line >= 1)
	{
		// while the counter is less than or equal to the number of lines
		while (i <= line)
		{
			// If it's in the first line
			if (i == 1)
				ft_print(column, 'A', 'B', 'C');
			// If it's in the last line
			else if (i == line)
				ft_print(column, 'A', 'B', 'C');
			// If it's in the middle lines
			else
				ft_print(column, 'B', ' ', 'B');
			i++;
		}
	}
