#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - a dogs profile
 * @a: name of dog
 * @b: age of dog
 * @c: owner of dog
 * Description: Longer description
 */
struct my_struct
{
	char *a;
	float b;
	char *c;
};

/**
 * dog_t: typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *a, float b, char *c);
void print_dog(struct dog *d);
dog_t *new_dog(char *a, float b, char *c);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

