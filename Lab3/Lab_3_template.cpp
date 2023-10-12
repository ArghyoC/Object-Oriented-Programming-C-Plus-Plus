/***
 * CSE 2010 Fall 2023
 * Lab #3
 * Arghyo Chakma #007873847
 * 10/9/2023
 *
 * This lab will allow students to create their own class object. 
 * It will allow us to create a class interface with a header file, input member functions within a .cpp file and test the class within a main file.
 * This lab will teach us about private variables and how to manipulate them using mutator functions and access them with accessor functions with respect to scope.
 * And students will learn to link their files together. 
 *
 * {Describe 1) what was most challenging and 2) how you solved/overcame the problem OR
 * the directions of how you PLAN to solve it}
 *
***/

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

/**
 * The structure of the files are as follows:
 * Lab_3_template.cpp -> calls the class and is considered the "main" program
 * Person.cpp -> implements and contains the functionalities of the class
 * Person.h -> contains the interface, declarations of the class, and  includes 
 * the private variables and member functions
 */

/**
 *  Following the examples below, create your own class objects that calls ALL
 *  the functions. 
 * 
 *  Initialize your objects of type Person.
 *  Use the mutator functions to modify the private variables of your Person.
 *  Display the variables associated with your Person using the accessor functions
 *  and cout or print.
 */

int main()
{
    Person bob = Person("Bob", 100, "retired", true);
    cout << bob.getName() << endl;
    Person unknown = Person(); //Person unknown; // 
    cout << unknown.getName() << endl;

    cout << bob.getAge() << endl;
    cout << unknown.getAge() << endl;
}

