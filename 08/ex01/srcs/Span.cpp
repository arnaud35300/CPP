/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:05:46 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/05 09:45:23 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Span::Span(unsigned int max) : _max(max)
{
	return ;
}

Span::Span(Span const & src)
{
	*this = src;
	return ;
}

Span::~Span(void)
{
	return ;
}

Span &	Span::operator=(Span const & rhs)
{
	if (&rhs != this)
		this->_max = rhs.getMax();
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Span const & rhs)
{
	std::vector<unsigned int>			store = rhs.getStore();
	std::vector<unsigned int>::iterator it;
	std::vector<unsigned int>::iterator ite = store.end();

	o << "Max vector size: " << rhs.getMax() << std::endl
		<< "Vector current size: " << store.size() << std::endl
		<< "Vector content: [ ";
	for (it = store.begin(); it != ite; ++it)
		o << *it << " ";
	o << "]" << std::endl;
	return (o);
}

unsigned int	Span::getMax(void) const
{
	return (this->_max);
}

std::vector<unsigned int> 	Span::getStore(void) const
{
	return (this->_store);
}

void	Span::addNumber(unsigned int n)
{
	if (this->_store.size() == this->_max)
		throw	std::overflow_error("The vector is full, impossible to add.");
	this->_store.push_back(n);
	return ;
}
unsigned int	Span::longestSpan(void) const
{
	std::vector<unsigned int>	copy(this->_store);

	if (copy.size() < 2)
		throw std::length_error("The vector size is less than 2" );
	std::sort(copy.begin(), copy.end());
	return (copy.back() - copy.front());
}

unsigned int	Span::shortestSpan(void) const
{
	std::vector<unsigned int>			copy(this->_store);
	unsigned int						shortest;
	unsigned int						compare;
	std::vector<unsigned int>::iterator	it;

	if (copy.size() < 2)
		throw std::length_error("The vector size is less than 2");
	std::sort(copy.begin(), copy.end());
	shortest = copy.at(1) - copy.at(0);
	for (it = ++copy.begin(); it != copy.end(); ++it)
	{
		compare = *it - *(it - 1);
		if (compare < shortest)
			shortest = compare;
	}
	return (shortest);
}

void	Span::addByIteratorRange(std::vector<unsigned int>::iterator it, std::vector<unsigned int>::iterator ite)
{
	unsigned long range;
	unsigned long available_space;

	if (it > ite)
		throw std::out_of_range("It need to be less than Ite.");
	range = ite - it;
	available_space = this->_max - this->_store.size();
	if (available_space < 1)
		return ;
	std::cout << range << std::endl;
	std::cout << available_space << std::endl;
	if (range > available_space)
		ite = it + available_space;
	this->_store.insert(this->_store.end(), it, ite);
	return ;
}
