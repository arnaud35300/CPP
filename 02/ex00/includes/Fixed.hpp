/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:25:17 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/27 11:35:06 by arguilla         ###   ########.fr       */
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
	static int	_bytes;

};

#endif /* FIXED_H */