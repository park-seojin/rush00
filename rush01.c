/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 11:00:32 by seojpark          #+#    #+#             */
/*   Updated: 2020/07/05 12:48:53 by seojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	while (a <= y)
	{
		while (b <= x)
		{
			if ((a == 1 && b == 1) || (a == y && b == x && a != 1 && b != 1))
				ft_putchar('/');
			else if ((a == 1 && b == x) || (a == y && b == 1))
				ft_putchar('\\');
			else if (b > 1 && a > 1 && b < x && a < y)
				ft_putchar(' ');
			else
				ft_putchar('*');
			b++;
		}
		ft_putchar('\n');
		a++;
		b = 1;
	}
}
