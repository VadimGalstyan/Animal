#include "bear.h"

Bear::Bear(const int& age,const int& weight,const std::string& gender,
         const std::string& color,const std::string& breed)
         :
         Animal(age,weight,gender),m_color(color),m_breed(breed)
         {
         }

Bear::~Bear()
{
}

void Bear::sound()
{
    std::cout<<"Bear"<<std::endl;
}

void Bear::printBear() const
{
    printAnimal();
    std::cout<<"Color: "<<m_color<<std::endl;
    std::cout<<"Breed: "<<m_breed<<std::endl;
}

