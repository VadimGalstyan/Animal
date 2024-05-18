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


Dog::Dog(Dog&& obj) : Animal(obj.getAge(),obj.getWeight(),obj.getGender()),m_name(obj.m_name),m_breed(obj.m_breed)
{
    obj.setAge(0);
    obj.setWeight(0);
    obj.setGender("");
    obj.m_name = "";
    obj.m_breed = "";
}

Dog& Dog::operator=(Dog&& obj)
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
        
