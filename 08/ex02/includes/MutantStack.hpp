/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 10:21:17 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/05 10:45:28 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

template<typename T>
class	MutantStack :	public std::stack<T>
{
	public:

		typedef typename std::stack<T>::container_type::iterator
			iterator;
		typedef typename std::stack<T>::container_type::const_iterator
			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator
			reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator
			const_reverse_iterator;

		MutantStack(void) { return ;}
		MutantStack(MutantStack const & src) { *this = src; return ;}
		~MutantStack(void) { return ;}

		MutantStack &	operator=(const MutantStack & rhs)
		{
			(void)rhs;
			return (*this);
		}

		iterator		begin(void) { return (this->c.begin());}
		const_iterator	begin(void) const { return (this->c.begin());}
		
		iterator		end(void) { return (this->c.end());}
		const_iterator	end(void) const { return (this->c.end());}

		reverse_iterator		rbegin(void) { return (this->c.rbegin());}
		const_reverse_iterator	rbegin(void) const { return (this->c.rbegin());}
	
		reverse_iterator		rend(void) { return (this->c.rend());}
		const_reverse_iterator	rend(void) const { return (this->c.rend());}
};

# endif
