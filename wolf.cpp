#include "wolf.h"

Wolf::Wolf(const int& age,const int& weight,const std::string& gender,
         const std::string& color,const std::string& breed)
         :
         Animal(age,weight,gender),m_color(color),m_breed(breed)
         {
         }

Wolf::~Wolf()
{
}

void Wolf::sound()
{
    std::cout<<"Wolf"<<std::endl;
}

void Wolf::printWolf() const
{
    printAnimal();
    std::cout<<"Color: "<<m_color<<std::endl;
    std::cout<<"Breed: "<<m_breed<<std::endl;
}

Wolf::Wolf(Wolf&& obj) : Animal(obj.getAge(),obj.getWeight(),obj.getGender()),m_color(obj.m_color),m_breed(obj.m_breed)
{
    obj.setAge(0);
    obj.setWeight(0);
    obj.setGender("");
    obj.m_color = "";
    obj.m_breed = "";
}

Wolf& Wolf::operator=(Wolf&& obj)
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
