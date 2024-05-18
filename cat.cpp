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


Cat::Cat(Cat&& obj) : Animal(obj.getAge(),obj.getWeight(),obj.getGender()),m_name(obj.m_name),m_breed(obj.m_breed)
{
    obj.setAge(0);
    obj.setWeight(0);
    obj.setGender("");
    obj.m_name = "";
    obj.m_breed = "";
}

Cat& Cat::operator=(Cat&& obj)
{
    setAge(obj.getAge());
    setWeight(obj.getWeight());
    setGender(obj.getGender());
    m_name = obj.m_name;
    m_breed = obj.m_breed;

    obj.setAge(0);
    obj.setWeight(0);
    obj.setGender("");
    obj.m_name = "";
    obj.m_breed = "";
}
