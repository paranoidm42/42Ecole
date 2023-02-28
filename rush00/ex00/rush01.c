void	ft_putchar(char c);

void	print_top_line(int x, int line)
{	
	int	i;

	i = 0;
	if (line == 1)
		ft_putchar('\\');
	else
		ft_putchar('/');
	while (i < x - 2 && x > 1)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1)
	{
		if (line == 1)
			ft_putchar('/');
		else
			ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	print_middle_lines(int x, int y)
{
	int	j;
	int	i;

	j = 0;
	while (j < y - 2 && y > 2)
	{
		ft_putchar('*');
		i = 0;
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		if (x > 1)
			ft_putchar('*');
		ft_putchar('\n');
			j++;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_top_line(x, 0);
		print_middle_lines(x, y);
		if (y > 1)
			print_top_line(x, 1);
	}
}
