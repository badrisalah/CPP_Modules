/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:56:02 by sabadri           #+#    #+#             */
/*   Updated: 2025/11/05 12:13:54 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << "----- DEBUG -----" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\n----- INFO -----" << std::endl;
    harl.complain("INFO");

    std::cout << "\n----- WARNING -----" << std::endl;
    harl.complain("WARNING");

    std::cout << "\n----- ERROR -----" << std::endl;
    harl.complain("ERROR");

    std::cout << "\n----- INVALID LEVEL -----" << std::endl;
    harl.complain("RANDOM");

    return 0;
}
