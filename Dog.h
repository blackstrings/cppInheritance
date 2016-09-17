#ifndef DOG_H
#define DOG_H

#include "Anim.h"	//include the base class

namespace XL{

	class Dog : public Anim{
	public:
		Dog();
		~Dog();
		virtual void move();	//virtual needs to stay to match base
		virtual int getAge();
		int age;
	};
}

#endif