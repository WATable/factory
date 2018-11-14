
#include <stdio.h>
#include "Object.h"
int main(int argc, char const *argv[])
{

	Object * ob = new Object();
	
    printf("HelloWorld\n%s",(ob->ToString().c_str()));
    return 0;
}

