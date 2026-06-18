
#include <unistd.h>

char	ft_matriz(char na, char nb, char nc, char nd);

void	matrgen(void)
{
	char	na;
	char	nb;
	char	nc;
	char	nd;
	char	array[24][4];
	int	cont;

	na = '1';
	nb = '1';
	nc = '1';
	nd = '1';
	cont = 0;
	while (na < '5')
	{
		nb = '1';
		while(nb < '5')
		{
			if ( nb != na)
			{
				nc= '1';
				while (nc < '5')
				{
					if (nb != nc && nc != na)
					{
						nd = '1';
						while (nd < '5')
						{
							if (nd != na && nd != nb && nd != nc)
							{
								write(1,&na,1);
								array[cont][0] = na;
								write(1,&nb,1);
								array[cont][1] = nd;
								write(1,&nc,1);
								array[cont][2] = nc;
								write(1,&nd,1);
								array[cont][3] = nd;
								write(1, "\n", 1);	
								nd++;
								cont++;
							}
							nc++;
						}
						nb++;
					}
					na++;
				}
			}
		}
	}	
	
}

void	
{
	int	i;

	i = 0;

	i = arr[0]
	while (i < 24)
	{
		arr[1]
		while (i < 24)	
			while (i < 24)	
				while ( i < 24)	


/*char    ft_matriz(char *aar)
{
	int     rown;
	int     coln;
	int     irow;
	int     icol;
	char	**matrx;

	rown = 4;
	coln = 4;
	irow = 0;
	while (irow < rown)
	{
		icol = 0;
		while (icol < coln)
		{
			write(1, &na, 1);
			icol++;
			write(1, &nb, 1);
			icol++;
			write(1, &nc, 1);
			icol++;
			write(1, &nd, 1);
			icol++;
			write(1,"\n", 1);
		}
//		write(1,"\n", 1);
		irow++;
	}
	write(1,"\n", 1);
	return (matrx);
}*/

int     main(void)
{
         matrgen();
         return (0);
}
