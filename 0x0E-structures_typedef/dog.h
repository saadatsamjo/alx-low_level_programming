#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - new struct
 * @name:- the name
 * @age:- the age
 * @owner:- the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
