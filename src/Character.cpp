/**
 * @file Character.cpp
 * Created on 09/08/2022
 * 
 * TODO: Add documentation
 * 
 * © 2022 by Zachary Harris (zacharykeatonharris@gmail.com)
 */

#include "../include/Character.h"
#include <cmath>

Character::Character():
    max_health(25),
    health(25),
    ticks(0)
{

} // end default constructor

Character::Character(std::string name):
    name(name),
    max_health(25),
    health(25),
    ticks(0)
{

} // end initializing construnctor

Character::~Character()
{

} // end destructor

std::string Character::getName()
{
    return this->name;
} // end getName

void Character::setName(std::string name)
{
    this->name = name;
} // end setName 

int Character::getHealth()
{
    return this->health;
} // end getHealth

void Character::setHealth(int new_health)
{
    this->health = new_health;
} // end setHealth

int Character::getMexHealth()
{
    return this->max_health;
}

void Character::setMaxHealth(int new_max)
{
    this->max_health = new_max;
}

int Character::getTicks()
{
    return this->ticks;
} // end getTicks

void Character::setTicks(int new_ticks)
{
    this->ticks = new_ticks;
} // end setTicks

void Character::incrementTicks()
{
    this->ticks++;
} // end incrementTicks

int Character::getAge()
{
    return (int)std::floor(this->ticks / TICKS_PER_DAY);
} // end getAge