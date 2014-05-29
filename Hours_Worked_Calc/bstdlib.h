/*
 * bstdlib.h
 *
 *  Created on: Sep 11, 2013
 *      Author: brandon
 */
#pragma once

#include <iostream>
#include <cstdlib>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

class BStdLib //Mostly obsolete with CinReader, but I had already finished them and didn't want to just delete them. Now mostly for stall and clearscreen.
{
public:
	BStdLib();//Default constructor
	void stall();//places a command on screen to allow for a user defined break
	void clearScreen();//clears the screen
	char checkChar(string range);//checks to make sure an entry is a character, range is a string that is checked for.
	int checkInt(bool negatives);//checks to make sure the entry is an integer, returns the integer. Negatives false for positive only
	double checkDouble(bool negatives);//checks to make sure the entry is a double value. Negatives false for positive only
	string checkString();//returns string
private:
	bool cont;
	string lag;
	string test;
	bool intCont;
	bool dblCont;
	bool point;
};

class Debug // for debugging code that is misbehaving.
{
public:
	void debLoc();//stalls with a message to help with locating a logic problem.
	void debLoc(string key);//stalls with a message, key, to locate a branch problem.
	void debLoc(int key);//stalls with a integer, key, to locate branch problems
	void debLoc(char key);// with with a char, key, to locate branch problems.
	void debOne(string key);//debOne, all forms, follow display "key" to keep track of a variable that is giving trouble.
	void debOne(int key);
	void debOne(char key);
	void debOne(double key);
	void debTwo(string a, string b);//debTwo, all forms, follow and display "a" and "b" to track variables that are giving you problems.
	void debTwo(int a, int b);
	void debTwo(char a, char b);
	void debTwo(double a, double b);
private:

};
