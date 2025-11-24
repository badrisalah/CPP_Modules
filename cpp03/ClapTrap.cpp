#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
_name("default"), _hitpoint(10),_energypoints(10), _attackdamage(0)
{
	std::cout<<"ClapTrap"<<_name<<"constructed (default)"<<std::endl;
}

ClapTrap::ClapTrap(const std::string &name) :
_name(name), _hitpoint(10),_energypoint(10),_attackdamage(0)
{
	std::cout<<"ClapTrap"<<_name<<"constructed"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap)
{
	*this=other;
	std::cout<<"ClapTrap"<<_name<<"copy-constructed"<<std::endl;
}

