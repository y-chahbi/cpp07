/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:42:01 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/22 22:34:50 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

void    func(int i);

template <typename T>
void    iter(T *arry, T size, void (*func)(T))
{
    for (int i = 0; i < size; i++)
        func(arry[i]);
}

#endif