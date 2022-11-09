/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aigounad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 20:59:09 by aigounad          #+#    #+#             */
/*   Updated: 2022/07/23 23:35:28 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	lol(char c1, char c2, int i, int col)
{
	if (i == 1)
		ft_putchar(c1);
	else if (i == col)
		ft_putchar(c2);
	else
		ft_putchar('*');
}

void	rush(int col, int row)
{
	int	i;
	int	j;

	j = 1;
	while (j <= row)
	{
		i = 1;
		while (i <= col)
		{
			if (j == 1)
				lol('/', '\\', i, col);
			else if (j == row)
				lol('\\', '/', i, col);
			else
			{
				if (i == 1 || i == col)
					ft_putchar('*');
				else
					ft_putchar(' ');
			}
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
