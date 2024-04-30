#include "lion.h"

Lion::Lion(const int& age,const int& weight,const std::string& gender,
            const std::string& color,const std::string& breed)
            :
           Animal(age,weight,gender),m_color(color),m_breed(breed)
        {
        }
    
Lion::~Lion()
{
}

void Lion::sound()
{
    std::cout<<"Lion"<<std::endl;
}

void Lion::printLion() const
{
    printAnimal();
    std::cout<<"Breed: "<<m_breed<<std::endl;
    std::cout<<"Color: "<<m_color<<std::endl;
}