/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:42:55 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/22 22:33:23 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    func(int i)
{
    std::cout << i << std::endl;
}

int main()
{
    int ar[] = {1,6,9,5,4,8,2,6,5};
    iter(ar, 9, func);
}