#ifndef _ANIMAL_
#define _ANIMAL_
#include <iostream>

class Animal
{
public:
     Animal(const int&,const int&,const std::string&);
     Animal(Animal&&);
     Animal& operator=(Animal&&);
     virtual ~Animal();

public:
     virtual void sound() = 0;
     void printAnimal() const;

     void setAge(int);
     void setWeight(int);
     void setGender(std::string);

     int getAge();
     int getWeight();
     std::string getGender();
    
private:
     int m_age = 0;
     int m_weight = 0;
     std::string m_gender;
};

#endif //_ANIMAL_