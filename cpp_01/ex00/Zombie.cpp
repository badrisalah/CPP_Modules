#include "zombie.hpp"

Zombie::Zombie(std::string name) : name(name){};

void Zombie::announce(void)
{
	std::cout<<getname()<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::~Zombie(){
	std::cout<<getname();
	std::cout<<": Destructor called"<<std::endl;
}