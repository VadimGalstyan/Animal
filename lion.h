#ifndef _LION_
#define _LION_

#include "animal.h"

class Lion : public Animal
{

public:
   Lion(const int&,const int&,const std::string&,const std::string&,const std::string&);
   ~Lion();
public:
   void printLion() const;
   void sound() override;

private:
   std::string m_color;
   std::string m_breed;

};

#endif // _Lion_