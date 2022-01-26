/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:04:33 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/26 16:19:51 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*strPtr = &str;
	std::string	&strRef = str;
	
	std::cout << "Memory address of str variable : " << &str << std::endl;
	std::cout << "Memory address held by strPtr variable : " << &strPtr << std::endl;
	std::cout << "Memory address held by strRed variable : " << &strRef << std::endl;

	std::cout << "The value of the str variable : " << str << std::endl;
	std::cout << "The value pointed to by strPtr variable : " << *strPtr << std::endl;
	std::cout << "The value pointed to by strRed variable : " << strRef << std::endl;
	return (0);
}
