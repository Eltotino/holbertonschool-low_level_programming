
#ifndef dog_h
#define dog_h
#include <stdio.h>
/**
* struct dog -info about a dog
* @name :char
* @age : float
* @owner : char
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
