/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 03:36:02 by sabadri           #+#    #+#             */
/*   Updated: 2025/11/29 23:35:23 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		return (std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl,1);
	int i = 1;
	int j;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
				std::cout<<(char)toupper(av[i][j]);
			else
				std::cout<<av[i][j];
			j++;
		}
		i++;
	}
	std::cout<<"\n";
	return 0;
}