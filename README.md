## Running the Game

Navigate to the build folder. The latest build has already been compiled and all that is needed
it to run the command './driver' in the terminal. If a recompile is needed you will need to use
CMake to build the file. Run the command 'cmake --build .' to build the executable. This will 
create a file named 'driver' which is the executable.

## About the Game

The concept of this game is that you are an ordinary person that lives a boring life. You mainly
spend your time at home and you can go to school or class. But everything that you do will be done
at home. Just like real life, you have certain things that you should do or else your health will
decrease. This is just a proof of concept, so you really only have one main source of health, but
the software is designed to be expanded upon. You could have meters for different things such as
hunger, bladder, etc. The goal is to live as long as possible but over time your max health will decrease.
You will eventually die and your goal is to prolong it. Every action that a player can do will be inherited
from the ActionNode class. In the process method for these derived classes, the degradation method should be 
called for the simulation of time passing and then the chooseMove method to show the following moves to choose
from. The character class has everything related to the player. Just add attributes to this to enhance the
experience of the player. Say we wanted the player to earn moeny when they went to work, then we would
add a money attribute. Or an inventory, or whatever. The graph class is basically the game but it was 
dsigned for anything that represents a graph. For example, if we wanted to model the stock market that the player
could buy into with their money then we would do that with two nodes, one for a bear market and one for a bull market, 
we could create a graph with two nodes and represent the transitions between the nodes as a markov chain. We would 
need to create a new probability node for these transitions, but it would work. 

The game was written in C++ because that is the language that I am used to but I probably should have used a different
language so I wouldn't need to manage memory myself. You naviage through the game using the terminal with text options.
You input the number next to the action that you would like to do. After each action your health is displayed. After some
number of moves if you haven't slept then you are forced to sleep. Usually sleeping will restore most of your health, but
if you get forced to sleep it won't be as effective. I learned that making a game is a lot about the storytelling which
I am not good at. After I got to a point to where I could create a graph most of the work was figuring out what each
node should do and what the different nodes had in common so I didn't have to write different but similar classes for 
each node. I also learned that time could be done better than the user deciding what to do. Time itself could be different
states that just happens automatically. I didn't do it that way though but it might have been better. I also realize that
I should learn more about virtual classes in C++. I feel I did a decent job but I think the code could be improved.

## File Structure

The 'include' folder contains all of the header files and the 'src' folder contains all of the source/cpp files.