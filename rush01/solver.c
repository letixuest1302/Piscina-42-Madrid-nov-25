int	check_col_up(int grid[4][4], int col, int expected);
int	check_col_down(int grid[4][4], int col, int expected);
int	check_row_left(int grid[4][4], int row, int expected);
int	check_row_right(int grid[4][4], int row, int expected);

int	is_safe(int grid[4][4], int row, int col, int val)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == val || grid[i][col] == val)
			return (0);
		i++;
	}
	return (1);
}

int	check_line_constraints(int grid[4][4], int consts[16], int row)
{
	if (!check_row_left(grid, row, consts[8 + row]) ||
		!check_row_right(grid, row, consts[12 + row]))
		return (0);
	if (row == 3)
	{
		int col;
		col = 0;
		while (col < 4)
		{
			if (!check_col_up(grid, col, consts[col]) ||
				!check_col_down(grid, col, consts[4 + col]))
				return (0);
			col++;
		}
	}
	return (1);
}

int	solve(int grid[4][4], int consts[16], int pos)
{
	int row;
	int col;
	int val;

	if (pos == 16)
		return (1);
	row = pos / 4;
	col = pos % 4;
	val = 1;
	while (val <= 4)
	{
		if (is_safe(grid, row, col, val))
		{
			grid[row][col] = val;
			if (col == 3)
			{
				if (check_line_constraints(grid, consts, row))
					if (solve(grid, consts, pos + 1))
						return (1);
			}
			else
			{
				if (solve(grid, consts, pos + 1))
					return (1);
			}
			grid[row][col] = 0;
		}
		val++;
	}
	return (0);
}

