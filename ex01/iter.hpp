/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:42:01 by ychahbi           #+#    #+#             */
/*   Updated: 2024/02/09 09:47:08 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>



template <typename G, typename T, typename Y>
void    iter(G arry, T size, Y func)
{
    for (T i = 0; i < size; i++)
        func(arry[i]);
}

#endif