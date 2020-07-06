/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youpark <likilaki_@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 14:55:11 by youpark           #+#    #+#             */
/*   Updated: 2020/07/05 13:54:12 by youpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	b;
	int	a;

	b = 1;
	a = 1;
	while (a <= y)
	{
		while (b <= x)
		{
			if ((a == 1 && b == 1) || (a == y && b == x && a != 1 && b != 1))
				ft_putchar('A');
			else if ((a == 1 && b == x) || (a == y && b == 1))
				ft_putchar('C');
			else if (b > 1 && a > 1 && b < x && a < y)
				ft_putchar(' ');
			else
				ft_putchar('B');
			b++;
		}
		ft_putchar('\n');
		a++;
		b = 1;
	}
}
