/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 08:15:53 by ychahbi           #+#    #+#             */
/*   Updated: 2024/02/12 14:31:26 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"

int main()
{
    Array<int> strings(100);

    for (unsigned int i = 0; i < strings.size(); i++)
    {
        try {
            strings.setInArray(i, i);
        }
        catch(std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    try {

        std::cout << strings.getArray(5) << std::endl;
        std::cout << strings[10] << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try {

        strings[50] = 11;
        std::cout << strings[50] << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}