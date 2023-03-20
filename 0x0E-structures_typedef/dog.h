#ifndef DOG_H
#define DOG_H

typedef struct dog dog;
/**
 * struct dog - a structure to hold dog record
 * @name: dogs name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: this is the way to declare a basic strucre
 * to hold records
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
