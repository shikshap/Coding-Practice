#include<iostream>
using namespace std;

//in absence of virtual keyword when func is called both the times eat functon of base class is only caslled,
//but with virtual function in front of base clas method,eat function of both base and derived class will be called


class Animal{
public:	
virtual void eat(){cout<<"I am generic food eater\n";}
};
	
class Deer : public Animal
{
	
public:
void eat(){cout<<"I eat grass";}
		
};	
void func(Animal *abc) { abc->eat(); }		
int main(){

Animal *animal=new Animal;
Deer *deer=new Deer;

//animal->eat(); 
//deer->eat();

func(animal);
func(deer);

return 0;
}



