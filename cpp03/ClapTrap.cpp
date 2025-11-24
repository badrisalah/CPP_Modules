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

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name
                  << " is already destroyed! Further damage has no effect." << std::endl;
        return;
    }

    _hitPoints -= amount;
    if (_hitPoints < 0)
        _hitPoints = 0;

    std::cout << "ClapTrap " << _name
              << " takes " << amount << " damage! HP now: " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " cannot repair: it's destroyed!" << std::endl;
        return;
    }
    if (_energyPoints <= 0) {
        std::cout << "ClapTrap " << _name << " cannot repair: no energy left!" << std::endl;
        return;
    }

    _energyPoints--;
    _hitPoints += amount;

    std::cout << "ClapTrap " << _name
              << " repairs itself for " << amount
              << " HP! HP now: " << _hitPoints << std::endl;
}

