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

Bear::Bear(Bear&& obj) : Animal(obj.getAge(),obj.getWeight(),obj.getGender()),m_color(obj.m_color),m_breed(obj.m_breed)
{
    obj.setAge(0);
    obj.setWeight(0);
    obj.setGender("");
    obj.m_color = "";
    obj.m_breed = "";
}

Bear& Bear::operator=(Bear&& obj)
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

