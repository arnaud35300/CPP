/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:02:11 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/05 09:10:33 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

class	Span
{
	public:
		Span(unsigned int max);
		Span(Span const & src);
		~Span(void);
		
		Span &	operator=(Span const & rhs);

		unsigned int	getMax(void) const;
		std::vector<unsigned int>	getStore(void) const;
		void			addNumber(unsigned int n);
		unsigned int	longestSpan(void) const;
		unsigned int	shortestSpan(void) const;
		void			addByIteratorRange(std::vector<unsigned int>::iterator it, std::vector<unsigned int>::iterator ite);

	private:
		unsigned int	_max;
		std::vector<unsigned int>	_store;
		Span(void);
};

std::ostream &	operator<<(std::ostream & o, Span const & rhs);

#endif
