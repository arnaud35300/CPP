/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   App.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:50:36 by arguilla          #+#    #+#             */
/*   Updated: 2022/03/06 17:19:37 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class App
{
private:
	int stuff;
	enum e_type
	{
		CHAR,
		INT,
		FLOAT,
		DOUBLE,
		NAN,
		EMPTY
	};
	typedef struct s_pseudo_litteral
	{
		e_type type;
		std::string value;
	} t_pseudo_litteral;
	std::string const input;
	e_type type;

public:
	App(void) : input(""), type(EMPTY) { return; }
	App(std::string const &input) : input(input), type(EMPTY) { return; }
	~App(void) { return; }

	bool convertToChar(double n)
	{
		if (n - static_cast<int>(n) != 0 || n > 127 || n < 0)
			std::cout << "char: impossible" << std::endl;
		else if (n <= 31 || n == 127)
			std::cout << "char : Non displayable" << std::endl;
		else
			return (true);
		return (false);
	}

	void printChar(void)
	{
		char c = input[0];

		std::cout << "char: " << c << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
		return;
	}

	void printInt(void)
	{
		int n = atoi(input.c_str());
		std::cout << n << std::endl;
		if (
			(n >= static_cast<int>(INT32_MAX) && input.compare("2147483647") != 0) ||
			(n <= static_cast<int>(INT32_MIN) && input.compare("-2147483648") != 0)
		)
		{
			throw BadInputException();
		}
		if (convertToChar(n))
			std::cout << "char: " << static_cast<char>(n) << std::endl;
		std::cout << "int: " << n << std::endl;
		std::cout << "float: " << n << ".0f" << std::endl;
		std::cout << "double: " << n << ".0" << std::endl;
		return;
	}

	void printFloat(void)
	{
		stuff--;
		if (stuff < 1)
			stuff = 1;
		float n = atof(input.c_str());
		if (n > static_cast<float>(INT32_MAX) || n < static_cast<float>(INT32_MIN))
		{
			throw BadInputException();
		}
		if (convertToChar(n))
			std::cout << "char: " << static_cast<char>(n) << std::endl;
		std::cout << "int: " << static_cast<int>(n) << std::endl;
		std::cout.setf(std::ios::fixed);
		std::cout << std::setprecision(stuff) << std::fixed << "float: " << n << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(n) << "" << std::endl;
		return;
	}

	void printDouble(void)
	{
		if (stuff < 1)
			stuff = 1;
		double n = atof(input.c_str());
		if (n > static_cast<double>(INT32_MAX) || n < static_cast<double>(INT32_MIN))
		{
			throw BadInputException();
		}
		if (convertToChar(n))
			std::cout << "char: " << static_cast<char>(n) << std::endl;
		std::cout << "int: " << static_cast<int>(n) << std::endl;
		std::cout.setf(std::ios::fixed);
		std::cout << std::setprecision(stuff) << "float: " << static_cast<float>(n) << "f" << std::endl;
		std::cout << "double: " << n << "" << std::endl;
		return;
	}

	void printNan(void)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (input.compare("-inff") == 0 || input.compare("-inf") == 0)
		{
			std::cout << "float: -inff" << std::endl;
			std::cout << "double: -inf" << std::endl;
		}
		else if (input.compare("+inff") == 0 || input.compare("+inf") == 0)
		{
			std::cout << "float: +inff" << std::endl;
			std::cout << "double: +inf" << std::endl;
		}
		else
		{
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
		}
	}

	void printType(void)
	{
		if (type == EMPTY)
			return;
		void (App::*func[])(void) = {
			&App::printChar,
			&App::printInt,
			&App::printFloat,
			&App::printDouble,
			&App::printNan};
		(this->*func[type])();
	}

	void findType(void)
	{
		bool dot = false;
		bool f = false;

		static t_pseudo_litteral const pseudo_litterals[] =
			{
				{NAN, "-inff"},
				{NAN, "-inf"},
				{NAN, "+inff"},
				{NAN, "+inf"},
				{NAN, "nanf"},
				{NAN, "nan"}};
		for (unsigned long i = 0; i < sizeof(pseudo_litterals) / sizeof(pseudo_litterals[0]); ++i)
			if (input.compare(pseudo_litterals[i].value) == 0)
				type = pseudo_litterals[i].type;
		if (type != EMPTY)
			return;
		if (input.length() == 1 && (input[0] < '0' || input[0] > '9'))
		{
			type = CHAR;
			return;
		}
		stuff = 0;
		for (unsigned long i = 0; i < input.length(); ++i)
		{
			if (i == 0 && (input[i] == '-' || input[i] == '+'))
				continue;
			if (input[i] == '.' && !dot)
			{
				dot = true;
				continue;
			}
			if (dot)
				stuff++;
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
		return;
	}

	class BadInputException : public std::exception
	{
	public:
		virtual char const *what(void) const throw() { return ("Bad input format."); }
	};
};
