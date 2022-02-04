/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:26:12 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/04 12:01:21 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T = int>
class	Array
{
	public:
		Array<T>(void): _size(0), _array(NULL) {}
		Array<T>(const unsigned int size) : _size(size)
		{
			if (size < 0)
				throw std::out_of_range("ArrayList<X>::at() index is out of range");
			this->_array = new T[size];
		}
		Array<T>(const Array<T> & src) { *this = src; }
		~Array<T>(void)
		{
			if (this->_size > 0)
				delete [] this->_array;
		}
		Array &	operator=(const Array & rhs)
		{
			if (this == &rhs)
				return (*this);
			if (this->_size > 0)
				delete [] this->_array;
			this->_size = rhs.size();
			this->_array = new T[this->_size];
			for (int i = 0; i < this->_size; ++i)
				this->_array[i] = rhs[i];
			return (*this);
		}

		T &	operator[](const int id) const
		{
			if (id >= this->_size || id < 0)
				throw std::out_of_range("ArrayList<X>::at() index is out of range");
			return (this->_array[id]);
		}

		int	size(void) const
		{
			return (this->_size);
		}
	private:
		int	_size;
		T	*_array;
};
