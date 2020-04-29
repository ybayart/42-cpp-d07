/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 00:34:44 by hexa              #+#    #+#             */
/*   Updated: 2020/04/30 00:50:02 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void
swap(T& a, T& b)
{
	T	c;

	c = a;
	a = b;
	b = c;
}

template <typename T>
const T&
max(const T& a, const T& b)
{
	return (a > b ? a : b);
}

template <typename T>
const T&
min(const T& a, const T& b)
{
	return (a < b ? a : b);
}

int
main(void)
{
	int		a = 2;
	int		b = 3;
	
	::swap(a,b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return (0);
}
