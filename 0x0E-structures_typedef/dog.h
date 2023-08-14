#ifndef DOG_H
#define DOG_H
/**
*struct dog - new type dog with new element
*@name:dog name
*@owner: dog owners name
*@age: dog's age
*Return: dog name
*/
struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);



#endif
