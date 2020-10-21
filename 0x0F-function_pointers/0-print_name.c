#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);
	if (name == 0)
		    	   return;
	ptr = f;
		ptr(name);
	      

}
