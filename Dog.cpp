#include "Dog.h"	//include the header

//you do not need these here if you have them in the header
//#include <iostream>
//using namespace std;

//leave out virtual in the source.cpp files of method names when when extending base class functions
// unless you wanta child to further override methods in this class then use virtual

namespace XL{

	Dog::Dog(){}
	Dog::Dog(int age, string name){
		this->age = age;
		this->name = name;
	}
	Dog::~Dog(){}

	void Dog::move(){ 
		cout << "moving" << endl;
	}

	int Dog::getAge(){
		return age;
	}

	string Dog::getName(){
		return name;
	}

	void Dog::setName(string name){
		this->name = name;
	}

	

}
