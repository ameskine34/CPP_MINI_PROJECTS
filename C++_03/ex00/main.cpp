#include "ClapTrap.hpp"

int main()
{
    ClapTrap robot;

    robot.attack("enemy");
    robot.beRepaired(5);
    robot.takeDamage(3);
}