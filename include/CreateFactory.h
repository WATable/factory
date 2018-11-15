#if !defined(CREATE_FACTORY_H)
#define CREATE_FACTORY_H

#include "Object.h"

class CreateFactory
{
private:
public:
    CreateFactory();
    ~CreateFactory();

    Object *Create(int _type);
};






#endif // CREATE_FACTORY_H
