#include "animal.h"
#include "lion.h"
#include "dog.h"
#include "cat.h"
#include "bear.h"
#include "wolf.h"

int main()
{ 
    Animal* animal[5];

    Lion lion(5,150,"Male","","African");
    Dog dog(3,20,"Male","Nick","Pitbull");
    Cat cat(2,15,"Male","Mickey","Siamese");  
    Bear bear(9,200,"Male","light brown","Grizzly");   
    Wolf wolf(8,40,"Male","Gray","Eurasian");
    
    animal[0] = &bear;
    animal[1] = &dog;
    animal[2] = &cat;
    animal[3] = &wolf;
    animal[4] = &lion;

    for(int i = 0;i < 5;++i)
    {
	    animal[i]->sound();
    }

    return 0;
}
