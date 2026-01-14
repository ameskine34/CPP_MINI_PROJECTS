#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    name = "";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " is born!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " is destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& source): ClapTrap(source)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = source;
}

ScavTrap::ScavTrap()
{
    this->name = "";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& source)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this != &source) //we campare the address
    {
        this->name = source.name;
        this->hitPoints = source.hitPoints;
        this->energyPoints = source.energyPoints;
        this->attackDamage = source.attackDamage;
    }
    return *this;
}

void ScavTrap::attack(const std::string& target) {
    if (hitPoints <= 0 || energyPoints <= 0)
        return ;
    std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!\n";
    energyPoints--;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}