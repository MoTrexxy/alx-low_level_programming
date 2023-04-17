#ifndef D0G_H
#define DOG_H

/**
 * struct dog - the dog's structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner
 *
 * Description: defines dog attributes
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
