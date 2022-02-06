/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:24:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/06 12:52:50 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	xMax	= getMax(a, b, c);
	Fixed	xMin	= getMin(a.getX, b, c);

	return (true);
}

int	main(void)
{
	Point	a(10.2, 10.36);
	Point	b(20.4, 10.8);
	Point	c(15.02, 20.001);
	Point	p(15.0, 15.1235);

	std::cout << "[p] x: " << p.getX() << " y: " << p.getY() << std::endl;
	std::cout << std::endl;
	std::cout << "[a] x: " << a.getX() << " y: " << a.getY() << std::endl;
	std::cout << "[b] x: " << b.getX() << " y: " << b.getY() << std::endl;
	std::cout << "[c] x: " << c.getX() << " y: " << c.getY() << std::endl;
	return (0);
}
