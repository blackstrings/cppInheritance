#include "Dog.h"	//include the header you wish to use
#include <iostream>

using namespace XL;
using namespace std;

int main(){
	Dog d;
	d.move();
	d.age = 5;
	
	cout << d.getAge() << endl;
	return 0;
}

