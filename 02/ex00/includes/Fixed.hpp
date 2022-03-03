/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:25:17 by arguilla          #+#    #+#             */
/*   Updated: 2022/03/03 09:05:43 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed {

public:

	Fixed( void );
	Fixed(Fixed const & src );
	~Fixed( void );

	Fixed & operator=( Fixed  const & rhs );
	int	getValue(void) const;
	int	getRawBits(void) const;
	void	setRawBits(int const raw);


private:
	int	_value;
	static const int	_bytes;

};

#endif /* FIXED_H */
