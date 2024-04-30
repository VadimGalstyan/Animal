#ifndef _ANIMAL_
#define _ANIMAL_
#include <iostream>

class Animal
{
public:
     Animal(const int&,const int&,const std::string&);
     virtual ~Animal();

public:
     virtual void sound() = 0;
     void printAnimal() const;
    
private:
     int m_age = 0;
     int m_weight = 0;
     std::string m_gender;
};

#endif //_ANIMAL_