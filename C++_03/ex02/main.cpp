#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap robot;
    ScavTrap robot1;
    FragTrap robot2;

    robot.attack("enemy");
    robot.beRepaired(5);
    robot.takeDamage(3);
    robot1.attack("amine");
    robot1.guardGate();
    robot1.takeDamage(6);
    robot2.highFivesGuys();
}