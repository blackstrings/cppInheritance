#include "Dog.h"	//include the header you wish to use
#include <iostream>

using namespace XL;
using namespace std;

int main(){
	Dog d;
	d.move();
	d.age = 5;
	d.name = "Jane";
	d.setName("Jane the 2nd");
	
	cout << d.getAge() << endl;
	cout << d.getName() << endl;

	//dog2
	Dog d2(22,"Imppo");
	cout << d2.getAge() << endl;
	cout << d2.getName() << endl;

	return 0;
}

