/**
 * @file Character.h
 * Created on 09/08/2022
 * 
 * TODO: Add documentation
 * 
 * © 2022 by Zachary Harris (zacharykeatonharris@gmail.com)
 */

#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include <string>
#define TICKS_PER_DAY 6

/**
 * @class Character
 * 
 * TODO: Add documentation
 */
class Character {
    public:
        // Default constructor
        Character();

        // Initializing construnctor
        Character(std::string name);

        // Destructor
        ~Character();

        /**
         * Gets the character's name
         * 
         * @return std::string 
         */
        std::string getName();

        /**
         * Sets the character's name
         * 
         * @param[in] name 
         */
        void setName(std::string name);

        /**
         * Get the Health object
         * 
         * @return int 
         */
        int getHealth();

        /**
         * Set the Health object
         * 
         * @param[in] new_health 
         */
        void setHealth(int new_health);

        /**
         * Get the Mex Health object
         * 
         * @return int 
         */
        int getMexHealth();

        /**
         * Set the Max Health object
         * 
         * @param[in] new_max 
         */
        void setMaxHealth(int new_max);

        /**
         * Get the Ticks object
         * 
         * @return int 
         */
        int getTicks();

        /**
         * Set the Ticks object
         * 
         * @param[in] new_ticks 
         */
        void setTicks(int new_ticks);

        /**
         * 
         * 
         */
        void incrementTicks();

        /**
         * Get the Age object
         * 
         * @return int 
         */
        int getAge();

    private:
        std::string name;

        int ticks;

        int health;

        int max_health;
}; // end Character class

#include "../src/Character.cpp"

#endif