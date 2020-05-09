/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 01:54:15 by hexa              #+#    #+#             */
/*   Updated: 2020/05/09 19:44:49 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>

void
checkInt(void)
{
	try
	{
		unsigned int	size = 10;
		Array<int>		arr(size);
//		Array<int>		arr2(-1);

		std::cout << "size: " << arr.size() << std::endl;
		for (unsigned int i = 0;i < size;i++)
			arr[i] = rand() % 42 + 1;
		for (unsigned int i = 0;i < size;i++)
			std::cout << i << ": " << arr[i] << std::endl;

		std::cout << "-:---\\" << std::endl;
		Array<int>		arr2(arr);
		for (unsigned int i = 0;i < size;i++)
		{
			arr[i] = 0;
			std::cout << i << ": " << arr[i] << " | " << arr2[i] << std::endl;
		}

		std::cout << "-:---+---\\" << std::endl;
		Array<int>		arr3 = arr2;
		for (unsigned int i = 0;i < size + 1;i++)
		{
			if (i != size)
				arr2[i] = 0;
			std::cout << i << ": " << arr[i] << " | " << arr2[i] << " | " << arr3[i] << std::endl;
		}
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void
checkString(void)
{
	try
	{
		unsigned int		size = 5;
		Array<std::string>	arr(size);
		std::string		tab[] = {"toto", "tata", "titi", "tutu", "tete"};
//		Array<std::string>	arr2(-1);

		std::cout << "size: " << arr.size() << std::endl;
		for (unsigned int i = 0;i < size;i++)
			arr[i] = tab[rand() % 5];

		for (unsigned int i = 0;i < size;i++)
			std::cout << i << ": " << arr[i] << std::endl;

		std::cout << "-:--\\" << std::endl;
		Array<std::string>	arr2(arr);
		for (unsigned int i = 0;i < size;i++)
		{
			arr[i] = "";
			std::cout << i << ": " << arr[i] << " | " << arr2[i] << std::endl;
		}

		std::cout << "-:--+--\\" << std::endl;
		Array<std::string>	arr3 = arr2;
		for (unsigned int i = 0;i < size + 1;i++)
		{
			if (i != size)
				arr2[i] = "";
			std::cout << i << ": " << arr[i] << " | " << arr2[i] << " | " << arr3[i] << std::endl;
		}
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int
main(void)
{
	checkInt();
	std::cout << std::endl << std::endl;
	checkString();

	std::cout <<std::endl << "arr1(-1): ";
	try
	{
		Array<std::string>	arr1(-1);
		std::cout << arr1.size();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "arr2: ";
	try
	{
		Array<std::string>	arr2;
		std::cout << arr2.size();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
