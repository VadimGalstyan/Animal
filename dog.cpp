#include "dog.h"

Dog::Dog(const int& age,const int& weight,const std::string& gender,
         const std::string& name,const std::string& breed)
         :
         Animal(age,weight,gender),m_name(name),m_breed(breed)
         {
         }

Dog::~Dog()
{
}

void Dog::sound()
{
    std::cout<<"Dog"<<std::endl;
}

void Dog::printDog() const
{
    printAnimal();
    std::cout<<"Name: "<<m_name<<std::endl;
    std::cout<<"Breed: "<<m_breed<<std::endl;
}
        
