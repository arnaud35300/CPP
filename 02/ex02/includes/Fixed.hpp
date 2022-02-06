/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:25:17 by arguilla          #+#    #+#             */
/*   Updated: 2022/01/27 11:54:09 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed {

public:

	Fixed( void );
	Fixed( int const nb );
	Fixed( float const nb );
	Fixed(Fixed const & src );
	~Fixed( void );

	Fixed & operator=( Fixed  const & rhs );
	Fixed	operator+( Fixed  const & rhs ) const;
	Fixed	operator-( Fixed  const & rhs ) const;
	Fixed	operator*( Fixed  const & rhs ) const;
	Fixed	operator/( Fixed  const & rhs ) const;
	Fixed	operator--(int);
	Fixed	operator--(void);
	Fixed	operator++(int);
	Fixed	operator++(void);
	bool	operator>( const Fixed & rhs) const;
	bool	operator<( const Fixed & rhs) const;
	bool	operator>=( const Fixed & rhs) const;
	bool	operator<=( const Fixed & rhs) const;
	bool	operator==( const Fixed & rhs) const;
	bool	operator!=( const Fixed & rhs) const;
	static	const Fixed &	min(const Fixed & rls, const Fixed & rhs);
	static	Fixed &	min(Fixed & rls, Fixed & rhs);
	static	const Fixed &	max(const Fixed & rls, const Fixed & rhs);
	static	Fixed &	max(Fixed & rls, Fixed & rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void)	const;

private:
	int	_value;
	static int	_bytes;

};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif /* FIXED_H */
