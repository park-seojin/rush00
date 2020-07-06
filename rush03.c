/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youpark <likilaki_@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 11:15:38 by youpark           #+#    #+#             */
/*   Updated: 2020/07/05 11:49:39 by youpark          ###   ########.fr       */
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
			if ((yc == 0 || yc == y - 1) && xc == 0)
				ft_putchar('A');
			else if ((yc == 0 || yc == y - 1) && xc == x - 1)
				ft_putchar('C');
			else if (xc > 0 && yc > 0 && xc < x - 1 && yc < y - 1)
				ft_putchar(' ');
			else
				ft_putchar('B');
			xc++;
		}
		ft_putchar('\n');
		yc++;
		xc = 0;
	}
}
