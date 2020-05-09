/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 00:34:44 by hexa              #+#    #+#             */
/*   Updated: 2020/05/09 19:33:08 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void
iter(const T* tab, const size_t size, void (*func)(const T &))
{
	for (size_t i = 0;i < size;i++)
		(*func)(tab[i]);
}

template <typename T>
void
aff(const T& elem)
{
	std::cout << elem << std::endl;
}

void
aff_int(const int& elem)
{
	std::cout << elem << std::endl;
}

void
aff_string(const std::string& elem)
{
	std::cout << elem << std::endl;
}

void
aff_pointer(void* const& elem)
{
	std::cout << elem << std::endl;
}


int
main(void)
{
	int			tint[5] = {0, 1, 2, 3 , 4};
	std::string	tstring[3] = {"toto", "tata", "titi"};
	void*		tpointer[2] = {&tint, &tstring};

	::iter<int>(tint, 5, aff_int);
	::iter<std::string>(tstring, 3, aff_string);
	::iter<void*>(tpointer, 2, aff_pointer);
	::iter<int>(tint, 5, ::aff);
	::iter<std::string>(tstring, 3, ::aff);
	::iter<void*>(tpointer, 2, ::aff);
	return (0);
}
