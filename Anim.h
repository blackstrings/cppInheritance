#ifndef ANIM_H	//can be any name as long as unqiue to this class try to avoid .h for older visual c++ version ide
#define ANIM_H

namespace XL{

	//abstract class
	class Anim{
	public:
		virtual ~Anim(){};			//you have to open and close scope for destructor
		virtual void move() = 0;	//pure virtual function
		virtual int getAge() = 0;
	};	//need this semicolon here
}

#endif
