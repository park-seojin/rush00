/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojpark <qkrtjwls8546@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 12:02:37 by seojpark          #+#    #+#             */
/*   Updated: 2020/07/05 12:04:24 by seojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	xc;
	int	yc;

	xc = 0;
	yc = 0;
	while (yc < y)
	{
		while (xc < x)
		{
			if ((yc == 0 || yc == y - 1) && (xc == 0 || xc == x - 1))
				ft_putchar('o');
			else if ((yc == 0 || yc == y - 1) && (xc > 0 && xc < x - 1))
				ft_putchar('-');
			else if ((xc == 0 || xc == x - 1) && (yc > 0 && yc < y - 1))
				ft_putchar('|');
			else
				ft_putchar(' ');
			xc++;
		}
		ft_putchar('\n');
		yc++;
		xc = 0;
	}
}
