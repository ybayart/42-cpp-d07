/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 01:45:25 by hexa              #+#    #+#             */
/*   Updated: 2020/05/09 19:46:03 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class	Array
{
	private:
		T*				m_array;
		unsigned int	m_size;
	
	public:
		Array(void);
		Array(unsigned int);
		Array(const Array&);
		~Array(void);

		T& operator[](unsigned int); 

		unsigned int	size(void);
};

template <typename T>
Array<T>::Array(void)
{
	this->m_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->m_size = n;
	this->m_array = new T[n];
}

template <typename T>
Array<T>::Array(const Array& src)
{
	this->m_size = src.m_size;
	this->m_array = new T[this->m_size];
	for (unsigned int i = 0;i < this->m_size;i++)
		this->m_array[i] = src.m_array[i];
}

template <typename T>
Array<T>::~Array(void)
{
	if (this->m_size > 0)
		delete[] this->m_array;
}

template <typename T>
T&
Array<T>::operator[]	(unsigned int index)
{
	if (index < 0 || index >= this->m_size)
		throw std::out_of_range("Index out of range");
	return (this->m_array[index]);
}

template <typename T>
unsigned int
Array<T>::size(void)
{
	return (this->m_size);
}

#endif
