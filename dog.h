#ifndef _DOG_
#define _DOG_

#include "animal.h"

class Dog : public Animal
{
public:
   Dog(const int&,const int&,const std::string&,const std::string&,const std::string&);
   ~Dog();
   Dog(Dog&& obj);
   Dog& operator=(Dog&& obj);

public:
   void sound() override;
   void printDog() const;

private:
   std::string m_name;
   std::string m_breed;
};

#endif // _DOG_