
#include <stdio.h>
#include "Object.h"
#include "CreateFactory.h"
int main(int argc, char const *argv[])
{

    CreateFactory *cf = new CreateFactory();

    Object * ob = cf->Create(0);
    printf("HelloWorld\n%s\n",(ob->ToString().c_str()));

    char str  = 'p';

    int ret = (int)str;

    printf("%d",ret);
	printf("%s", ret);
    return 0;
}

