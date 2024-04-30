#include "cat.h"

Cat::Cat(const int& age,const int& weight,const std::string& gender,
         const std::string& name,const std::string& breed)
         :
         Animal(age,weight,gender),m_name(name),m_breed(breed)
         {
         }

Cat::~Cat()
{
}

void Cat::sound()
{
    std::cout<<"Cat"<<std::endl;
}

void Cat::printCat() const
{
    printAnimal();
    std::cout<<"Name: "<<m_name<<std::endl;
    std::cout<<"Breed: "<<m_breed<<std::endl;
}

