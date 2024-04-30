#ifndef _CAT_
#define _CAT_
#include "animal.h"

class Cat : public Animal
{
public:
   Cat(const int&,const int&,const std::string&,const std::string&,const std::string&);
   ~Cat();

public:
   void sound() override;
   void printCat() const;

private:
   std::string m_name;
   std::string m_breed;
  
};

#endif //_CAT_
