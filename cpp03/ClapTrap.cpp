#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitpount(10),_energyPoints(10), _attackdamage(0)
{
	std::cout<<"ClapTrap"<<_name<<"constructed (default)"<<std::endl;
}
