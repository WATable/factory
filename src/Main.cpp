
#include <stdio.h>
#include "Object.h"
#include "CreateFactory.h"
int main(int argc, char const *argv[])
{

    CreateFactory *cf = new CreateFactory();

    Object * ob = cf->Create(0);
    printf("HelloWorld\n%s",(ob->ToString().c_str()));
    return 0;
}

