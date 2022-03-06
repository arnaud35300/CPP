/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/03/06 17:31:08 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	identify(Base * p)
{
		if (dynamic_cast<A *>(p))
			std::cout << "pointer type: [A]" << std::endl;
		else if (dynamic_cast<B *>(p))
			std::cout << "pointer type: [B]" << std::endl;
		else
			std::cout << "pointer type: [C]" << std::endl;
}

void	identify(Base & p)
{
	try
	{
		A &	a =	dynamic_cast<A &>(p);
		(void)a;
		std::cout << "reference type: [A]" << std::endl;
	}
	catch (std::exception & e) { (void)e;}
	try
	{
		B & b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "reference type: [B]" << std::endl;
	}
	catch (std::exception & e) { (void) e;}
	try
	{
		C &	c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "reference type: [C]" << std::endl;
	}
	catch (std::exception & e) { (void) e;}
}

Base *	generate(void)
{
	int min = 0, max = 2;
	int randNum = min + (rand() % static_cast<int>(max - min + 1));

	if (randNum == 0)
	{
		std::cout << "Instance of A" << std::endl;
		return (new A);
	}
	else if (randNum == 1)
	{
		std::cout << "Instance of B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "Instance of C" << std::endl;
		return (new C);
	}
}
int	main(void)
{
	Base *one;
	Base *two;
	Base *three;

	srand(time(0));
	one = generate();
	two = generate();
	three = generate();

	identify(one);
	identify(*one);
	identify(two);
	identify(*two);
	identify(three);
	identify(*three);

	delete one;
	delete two;
	delete three;
	return (0);
}
