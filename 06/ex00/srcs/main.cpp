/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:40:31 by arguilla          #+#    #+#             */
/*   Updated: 2022/02/03 17:08:19 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

class	App
{
	public:
		enum	e_type
		{
			CHAR,
			INT,
			FLOAT,
			DOUBLE,
			NAN,
			EMPTY
		};

		typedef struct	s_pseudo_litteral {
			e_type		type;
			std::string	value;
		}				t_pseudo_litteral;

		std::string const	input;
		e_type	type;
	
		App(void) : input(""), type(EMPTY) { return ;}
		App(std::string const & input) : input(input), type(EMPTY) { return ;}
		~App(void) { return ; }
	
		bool	convertToChar(double n)
		{
			if (n - static_cast<int>(n) != 0 || n > 127 || n < 0)
				std::cout << "char: impossible" << std::endl;
			else if (n <= 31 || n == 127)
				std::cout << "char : Non displayable" << std::endl;
			else
				return (true);
			return (false);
		}

		void	printChar(void)
		{
			char	c = input[0];

			std::cout << "char: " << c << std::endl;
			std::cout << "int: " << static_cast<int>(c)<< std::endl;
			std::cout << "float: " << static_cast<float>(c)<< std::endl;
			std::cout << "double: " << static_cast<double>(c)<< std::endl;
			return ;
		}
		void	printInt(void)
		{
			int	n = atoi(input.c_str());
			if (convertToChar(n))
				std::cout << "char: " << static_cast<char>(n) << std::endl;
			std::cout << "int: " << n << std::endl;
			std::cout << "float: " << static_cast<float>(n) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(n) << ".0" << std::endl;
			return ;
		}
		void	printFloat(void)
		{
			float	n = atof(input.c_str());

			if (convertToChar(n))
				std::cout << "char: " << static_cast<char>(n) << std::endl;
			std::cout << "int: " << static_cast<int>(n) << std::endl;
			std::cout << "float: " << n<< std::endl;
			std::cout << "double: " << static_cast<double>(n)<< std::endl;
			return ;
		}
		
		void	printDouble(void)
		{
			double	n = atof(input.c_str());

			if (convertToChar(n))
				std::cout << "char: " << static_cast<char>(n) << std::endl;
			std::cout << "int: " << static_cast<int>(n) << std::endl;
			std::cout << "float: " << static_cast<float>(n) << std::endl;
			std::cout << "double: " << n << std::endl;
			return ;
		}
		
		void	printNan(void)
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
		}

		void	printType(void)
		{
			if (type == EMPTY)
				return ;
			void	(App::*func[])(void) = {
				&App::printChar,
				&App::printInt,
				&App::printFloat,
				&App::printDouble,
				&App::printNan
			};
			(this->*func[type])();
		}
		void	findType(void)
		{
			bool	dot = false;
			bool	f = false;

			static t_pseudo_litteral const	pseudo_litterals[] = 
			{
				{NAN, "-inff"},
				{NAN, "-inf"},
				{NAN, "+inff"},
				{NAN, "+inf"},
				{NAN, "nanf"}, 
				{NAN, "nan"}
			};
			for (unsigned long i = 0; i < sizeof(pseudo_litterals)/sizeof(pseudo_litterals[0]); ++i)
				if (input.compare(pseudo_litterals[i].value) == 0)
					type = pseudo_litterals[i].type;
			if (type != EMPTY)
				return ;
			if (input.length() == 1 && (input[0] < '0' || input[0] > '9'))
			{
				type = CHAR;
				return ;
			}
			for (unsigned long i = 0; i < input.length(); ++i)
			{
				if (i == 0 && (input[i] == '-' || input[i] == '+'))
					continue;
				if (input[i] == '.' && !dot)
				{
					dot = true;
					continue;
				}
				if (input[i] == 'f' && i == input.length() - 1)
				{
					f = true;
					continue;
				}
				if (input[i] < '0' || input[i] > '9')
					throw App::BadInputException();
			}
			if (!f && !dot)
				type = INT;
			else if (dot && !f)
				type = DOUBLE;
			else
				type = FLOAT;
			return ;
		}
		bool	printBadInputMsg(std::string const & input, unsigned char const code) const
		{
			std::cerr << "Bad format input: [" << input << "]" << std::endl;
			return (code);
		}

	class	BadInputException: public std::exception
	{
		public:
			virtual char const * 	what(void) const throw() { return ("Bad input format."); }
	};
};

int	main(int ac , char **av)
{
	if (ac != 2)
		return (1);
	std::string	input = av[1];
	App	app(input);
	try
	{
		app.findType();
		app.printType();
	}
	catch (App::BadInputException & e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}
