#include "animal.h"

Animal::Animal(const int& age,const int& weight,const std::string& gender) 
           :
           m_age(age),m_weight(weight),m_gender(gender)
        {
        }

Animal::~Animal()
{
}

void Animal::printAnimal() const
{
    std::cout<<"Gender: "<<m_gender<<std::endl;
    std::cout<<"Age: "<<m_age<<std::endl;
    std::cout<<"Weight: "<<m_weight<<std::endl;
}