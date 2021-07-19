#include "dog.h"

/**
* init_dog - initializes variable of type struct dog
* @d: structure pointer
* @name: name of dog
* @age: age of dog
* @owner: dog owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner);
{
if (d != 0)
{
(*d).name = "name";
(*d).age = age;
(*d).owner = "owner";
}
}
