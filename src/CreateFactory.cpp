#include "CreateFactory.h"

CreateFactory::CreateFactory()
{

}

CreateFactory::~CreateFactory()
{
}

Object *CreateFactory::Create(int _type)
{

    if (_type == 0)
    {
        return new Object();
    }
    return NULL;
}
