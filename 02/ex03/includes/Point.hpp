/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:44:21 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/06 12:34:00 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	Point
{
	public:
		Point(void);
		Point(float const x, float const y);
		Point(Point const & src);
		~Point(void);

		Fixed const &	getX(void) const;
		Fixed const &	getY(void) const;

		Point &	operator=(Point const & rhs);
	private:
		Fixed const	_x;
		Fixed const	_y;	
};
