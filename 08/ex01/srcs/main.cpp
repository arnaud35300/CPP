/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/05 09:45:24 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	{
		Span	span(5);
		Span	empty_span(0);
	
		try
		{
			span.addNumber(21);
			span.addNumber(11);
			span.addNumber(3);
			span.addNumber(57);
			//empty_span.longestSpan();
			//empty_span.shortestSpan();
			std::cout << "Longest span : " << span.longestSpan() << std::endl;
			std::cout << "Shortest span : " << span.shortestSpan() << std::endl;
			std::cout << span;
			std::vector<unsigned int>	range(100, 4);
			span.addByIteratorRange(range.begin(), range.end());
			std::cout << span;
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		Span	span(20000);
		std::vector<unsigned int>	range(30000, 12);
		
		try
		{
			span.addByIteratorRange(range.begin(), range.end());
			std::cout << span;
			// ./prog | grep -o 12 | wc -l 
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}

	}

	return (0);
}
