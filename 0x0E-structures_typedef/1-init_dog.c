#include <stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
* init_dog -info about a dog
* @d : char
* @name :char
* @age : float
* @owner : char
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
}
