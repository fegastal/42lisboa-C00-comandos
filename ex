void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	midline(int ix, int x)
{
	if (ix == 1 || ix == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	lastline(int ix, int x)
{
	if (ix == 1 || ix == x)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	firstline(int ix, int x)
{
	if (ix == 1 || ix == x)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int ix;
	int iy;

	iy = 1;
	while (iy <= y)
	{
		ix = 1;
		while (ix <= x)
		{
			if (iy == 1)
				firstline(ix, x);
			else if (iy == y)
				lastline(ix, x);
			else
				midline(ix, x);
			ix++;
		}
		ft_putchar('\n');
		iy++;
	}
}
