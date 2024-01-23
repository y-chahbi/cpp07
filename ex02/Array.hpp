/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 08:15:13 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/23 15:46:17 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
    private:
        T* array;
        unsigned int y;
    public:
        Array();
        //const T& getSize() const;
        T& operator[](int);
        Array& operator=(const Array& Copy);
        Array(unsigned int);
        const T& getArray(int) const;
        void     setInArray(int, T);
        size_t size() const;
        ~Array();
};

#include "Array.tpp"
#endif