/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 01:31:52 by sabadri           #+#    #+#             */
/*   Updated: 2025/11/03 01:31:54 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    Zombie* heapZombie = newZombie("Heapster");
    heapZombie->announce();
    delete heapZombie;

    randomChump("Stacky");
    return 0;
}
