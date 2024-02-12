/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 08:52:09 by ychahbi           #+#    #+#             */
/*   Updated: 2024/02/12 14:29:21 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template <class T>
Array<T>::Array() : array(new int), y(0) {}


template <class T>
Array<T>::Array(unsigned int y) : array(new T[y]), y(y) {}

template <class T>
const T& Array<T>::getArray(unsigned int i) const
{
    return (this->array[i]);
}

template <typename T>
void     Array<T>::setInArray(unsigned int i, T o)
{
    if (i >= this->size() || i < 0)
        throw std::invalid_argument("Out of range");
    else
        this->array[i] = o;
}

template <class T>
size_t Array<T>::size() const
{
    return (y);
}

template <typename T>
Array<T>::Array(const Array& Copy)
{
    array = NULL;
    *this = Copy;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& Copy)
{
    this->y = Copy.size();
    delete[]  array;
    this->array = new T[Copy.size()];
    for (unsigned int i = 0; i < Copy.size(); i++)
        this->array[i] = Copy.getArray(i);
    return (*this);
}

template <class T>
T& Array<T>::operator[](unsigned int num)
{
    if (num < 0 || num >= this->size())
        throw std::invalid_argument("The index is out of bounds");
    return (this->array[num]);
}

template <class T>
Array<T>::~Array(){
    delete[] array;
}

#endif
