#ifndef _Wolf_
#define _Wolf_
#include "animal.h"

class Wolf : public Animal
{
public:
   Wolf(const int&,const int&,const std::string&,const std::string&,const std::string&);
   ~Wolf();
   Wolf(Wolf&& obj);
   Wolf& operator=(Wolf&& obj);

public:
   void sound() override;
   void printWolf() const;

private:
   std::string m_color;
   std::string m_breed;

};

#endif //_Wolf_

