#ifndef _Bear_
#define _Bear_
#include "animal.h"

class Bear : public Animal
{
public:
   Bear(const int&,const int&,const std::string&,const std::string&,const std::string&);
   ~Bear();
   Bear(Bear&& obj);
   Bear& operator=(Bear&& obj);

public:
   void sound() override;
   void printBear() const;

private:
   std::string m_color;
   std::string m_breed;

};

#endif //_Bear_

