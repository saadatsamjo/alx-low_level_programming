#include <stdio.h>
#include <main.h>
                                                                                  
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog
	{
		char *mydog;
		char *dogname;
		float doggoage;
		char *owner;
	} dog;
	struct dog->mydog = &d;
	struct dog->dogname = &name;
	struct dog->doggoage = &age;
	struct dog->owner = &owner;
}              
