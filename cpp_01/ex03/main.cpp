/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 05:15:43 by sabadri           #+#    #+#             */
/*   Updated: 2025/11/04 05:22:09 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    {
        Weapon club("crude spiked club");
        HumanA sabadri("sabadri", club);
        sabadri.attack();
        club.setType("some other type of club");
        sabadri.attack();
    }
    {
        Weapon club("crude spiked club");
        HumanB motelti("motelti");
        motelti.attack();
        motelti.setWeapon(club);
        motelti.attack();
        club.setType("some other type of club");
        motelti.attack();
    }
    return 0;
}
