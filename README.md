# CPPND: Capstone Snake Game Example

On this repo I show my solution to the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). 

In this code, all the criteria from the “README” and “Compiling and Testing” sections in [Rubric](https://review.udacity.com/#!/rubrics/2533/view) is satisfied, and at least 5 total criteria from the rest of the specification.

The skeleton of this project is based on this [project](https://github.com/udacity/CppND-Capstone-Snake-Game) provided by Udacity.


<img src="snake_game.gif"/>

## List of additional features

* There is a small menu at the start. You can chose:
  - 1.- New game.
  - 2.- Show HighScores.
  - 3.- Quit the game.

* There is a new manager class. This class provides the previously mentioned menu. This class also allows to save/load scores in/from a file and show them in screen.
* There is a player class. You can introduce your player name.

* Quit the game with esc key.
* Reset the game with r key.

## Rubic elements supported by program

### Loops, Functions, I/O
- The project reads data from a file and process the data, or the program writes data to a file.

  - This is done in class Manager. Functions in lines 76 and 89.

- The project demonstrates an understanding of C++ functions and control structures.

  - This is proved in main.cpp (loops and ifs in lines 25, 27 and 31; function calls line 28, 39, 46, and 49)

- Loops, Functions, I/O: The project accepts user input and processes the input.

  - This is done in controller.cpp (added option to press "esc" to quit and "r" to reset the game) and in player.cpp (you can introduce your player name)

### Object Oriented Programming

 - The project uses Object Oriented Programming techniques.
  
   - Added player and manager classes. These classes have attributes and classes.
 - Classes use appropriate access specifiers for class members.
   - Attribute in player are private. We access to them with public methods.
 - Classes abstract implementation details from their interfaces.
   - Player methods.




## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.