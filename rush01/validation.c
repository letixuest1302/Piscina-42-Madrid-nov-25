int	check_col_up(int grid[4][4], int col, int expected)
{
	int i;
	int max;
	int count;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			count++;
		}
		i++;
	}
	return (count == expected);
}

int	check_col_down(int grid[4][4], int col, int expected)
{
	int i;
	int max;
	int count;

	i = 3;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			count++;
		}
		i--;
	}
	return (count == expected);
}

int	check_row_left(int grid[4][4], int row, int expected)
{
	int j;
	int max;
	int count;

	j = 0;
	max = 0;
	count = 0;
	while (j < 4)
	{
		if (grid[row][j] > max)
		{
			max = grid[row][j];
			count++;
		}
		j++;
	}
	return (count == expected);
}

int	check_row_right(int grid[4][4], int row, int expected)
{
	int j;
	int max;
	int count;

	j = 3;
	max = 0;
	count = 0;
	while (j >= 0)
	{
		if (grid[row][j] > max)
		{
			max = grid[row][j];
			count++;
		}
		j--;
	}
	return (count == expected);
}
