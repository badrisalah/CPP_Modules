#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
_name("default"), _hitpoint(10),_energypoints(10), _attackdamage(0)
{
	std::cout<<"ClapTrap "<<_name<<"constructed (default)"<<std::endl;
}

ClapTrap::ClapTrap(const std::string &name) :
_name(name), _hitpoint(10),_energypoint(10),_attackdamage(0)
{
	std::cout<<"ClapTrap "<<_name<<"constructed"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap)
{
	*this=other;
	std::cout<<"ClapTrap "<<_name<<"copy-constructed"<<std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " cannot attack: no hit points left!" << std::endl;
        return;
    }
    if (_energyPoints <= 0) {
        std::cout << "ClapTrap " << _name << " cannot attack: no energy left!" << std::endl;
        return;
    }

    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage!" << std::endl;
}
