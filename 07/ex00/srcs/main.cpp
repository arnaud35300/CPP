/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/03/07 14:57:27 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	int			a = 2, b = 3;
	float		x = 3.14f, y= 2.3f;
	std::string	c = "chaine1", d = "chaine2";

	std::cout	<< "a : " << a << std::endl
				<< "b : " << b << std::endl
				<< "x : " << x << std::endl
				<< "y : " << y << std::endl << std::endl;
	swap(a, b);
	swap(x, y);
	std::cout	<< "a : " << a << std::endl
				<< "b : " << b << std::endl
				<< "x : " << x << std::endl
				<< "y : " << y << std::endl << std::endl;

	std::cout	<< "Max between " << a << " and " << b << " : " << max(a,b) << std::endl << std::endl;
	std::cout	<< "Min between " << a << " and " << b << " : " << min(a,b) << std::endl << std::endl;	
	std::cout	<< "Max between " << x << " and " << y << " : " << max(x,y) << std::endl << std::endl;
	std::cout	<< "Min between " << x << " and " << y << " : " << min(x,y) << std::endl << std::endl;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}
