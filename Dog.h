#ifndef DOG_H
#define DOG_H

#include "Anim.h"	//include the base class
#include <string>
#include <iostream>

using namespace std;

namespace XL{

	class Dog : public Anim{

	public:
		//properties
		int age;
		string name;

		//constructors
		Dog();
		Dog(int age, string name);
		~Dog();

		//virtual doesn't need to stay to match base
		//only if you want another child to override it
		void move();	
		int getAge();
		string getName();
		void setName(string name);
	};
}

#endif