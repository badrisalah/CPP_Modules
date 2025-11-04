/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabadri <sabadri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 06:01:00 by sabadri           #+#    #+#             */
/*   Updated: 2025/11/04 06:31:44 by sabadri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout<<"Emter <filename> <S1> <S2> "<<std::endl;
        return (1);
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if (s1.empty() || s2.empty())
    {
        std::cout<<"S1 and S2 cant be empty"<<std::endl;
        return (1);
    }
    std::ifstream infile(filename);//protect
    std::ofstream outfile((filename+".replace"));//protect
    std::string line;
    while (std::getline(infile,line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outfile << line<<std::endl;
    }
    return 0;
}
