#ifndef DOG_H
#define DOG_H

#include "Anim.h"	//include the base class

namespace XL{

	class Dog : public Anim{
	public:
		Dog();
		~Dog();

		//virtual doesn't need to stay to match base
		//only if you want another child to override it
		void move();	
		virtual int getAge();
		int age;
	};
}

#endif