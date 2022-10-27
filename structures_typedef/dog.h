#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - structure that save the dogs data
 * @name: pointer
 * @age: float
 * @owner: char *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
