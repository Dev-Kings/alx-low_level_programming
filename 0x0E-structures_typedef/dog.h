#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog info
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: A longer description.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
