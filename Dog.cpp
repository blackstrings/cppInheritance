#include "Dog.h"	//include the header
#include <iostream>

using namespace std;

//leave out virtual in the source .cpp files from extending base class functions

namespace XL{

	Dog::Dog(){}
	Dog::~Dog(){}

	void Dog::move(){ 
		cout << "moving" << endl;
	}

	int Dog::getAge(){
		return age;
	}

}
