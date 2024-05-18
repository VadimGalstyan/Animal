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

Lion::Lion(Lion&& obj) : Animal(obj.getAge(),obj.getWeight(),obj.getGender()),m_color(obj.m_color),m_breed(obj.m_breed)
{
    obj.setAge(0);
    obj.setWeight(0);
    obj.setGender("");
    obj.m_color = "";
    obj.m_breed = "";
}

Lion& Lion::operator=(Lion&& obj)
{
    setAge(obj.getAge());
    setWeight(obj.getWeight());
    setGender(obj.getGender());
    m_color = obj.m_color;
    m_breed = obj.m_breed;

    obj.setAge(0);
    obj.setWeight(0);
    obj.setGender("");
    obj.m_color = "";
    obj.m_breed = "";
}