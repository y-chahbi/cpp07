/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 08:15:53 by ychahbi           #+#    #+#             */
/*   Updated: 2024/02/09 10:34:58 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"

int main()
{
    Array<int> hello(12);
    
    Array<int> test(12);


    test.setInArray(10, 1000);
    hello = test;
    try{
        hello[6] = 5555;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << hello[10] << std::endl;
    //std::cout << test.size() << std::endl;
    //for (int i = 0; i < hello.size(); i++)
    //    std::cout << hello.getArray(i) << std::endl;
    //std::cout << hello.size() << std::endl;
}