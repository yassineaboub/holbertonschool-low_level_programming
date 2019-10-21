#include "dog.h"
#include <stdio.h>
/**
* init_dog - function initialize
*@d: name of structure
*@name: dog's name
*@age: dog's age
*@owner: owner's name
*Return: Nothing
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
