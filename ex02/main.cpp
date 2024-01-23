/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 08:15:53 by ychahbi           #+#    #+#             */
/*   Updated: 2024/01/23 15:59:11 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> hello(12);
    
    Array<int> hhh(12);


    hhh.setInArray(10, 1000);
    hello = hhh;
    try{
        hello[6] = 5555;
    }
    catch(const char* e)
    {
        std::cout << e << std::endl;
    }
    std::cout << hello[10] << std::endl;
    //std::cout << hhh.size() << std::endl;
    //for (int i = 0; i < hello.size(); i++)
    //    std::cout << hello.getArray(i) << std::endl;
    //std::cout << hello.size() << std::endl;
}