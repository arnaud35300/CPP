/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/03 17:28:20 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

class	Data
{
	public:
		uintptr_t	x;
};

uintptr_t	serialize(Data * ptr)
{
	uintptr_t	r = reinterpret_cast<uintptr_t>(ptr);
	return (r);
}

Data*	deserialize(uintptr_t raw)
{
	Data	*r = reinterpret_cast<Data *>(raw);
	return (r);
}

int	main(void)
{
	Data		*data = new Data;
	Data		*data2;
	uintptr_t	raw;

	data->x = 3;
	raw = serialize(data);
	data2 = deserialize(raw);
	data->x = 4;
	std::cout	<< "Data ptr: " << data << std::endl
				<< "Raw : " << raw	<< std::endl
				<< "Data2 value: " << data2->x << std::endl;
	return (0);
}
