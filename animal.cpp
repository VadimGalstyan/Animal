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

Animal::Animal(Animal&& obj) : m_age(obj.m_age),m_weight(obj.m_weight),m_gender(obj.m_gender)
{
    obj.m_age = 0;
    obj.m_gender = "";
    obj.m_weight = 0;
}

Animal& Animal::operator=(Animal&& obj)
{
    m_age = obj.m_age;
    m_gender = obj.m_gender;
    m_weight = obj.m_weight;

    obj.m_age = 0;
    obj.m_gender = "";
    obj.m_weight = 0;
}

void Animal::setAge(int x)
{
    m_age = x;
}

void Animal::setWeight(int x)
{
    m_weight = x;
}

void Animal::setGender(std::string x)
{
    m_gender = x;
}

int Animal::getAge()
{
    return m_age;
}

int Animal::getWeight()
{
    return m_weight;
}

std::string Animal::getGender()
{
    return m_gender;
}