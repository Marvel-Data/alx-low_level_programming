#include "dog.h"

/**
  * init_dog - initialize a variable of type struct dog
  * @d : pointer to the stuct dog
  * @name : pointer to the char name's dog
  * @age : Dogs age
  * @owner : pointer to char owner's dog
  * Return - Always 0.
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
