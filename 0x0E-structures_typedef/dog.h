#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new structure define dog basic info
 *
 * @name: First element of struct
 * @age: second element of struct
 * @owner: third element of struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
dog_t;

/* Additional function prototypes */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
