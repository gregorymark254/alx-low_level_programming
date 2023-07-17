#include "dog.h"

/**
  * init_dog - entry point
  * @d: one
  * @name: three
  * @age: four
  * @owner: five
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
