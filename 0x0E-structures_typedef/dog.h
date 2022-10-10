#ifndef DOG_H
#define DOG_H
/**
*struct dog - struct by name dog
*@name: element of dog
*@age: element of dog
*@owner: element of dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);




#endif
