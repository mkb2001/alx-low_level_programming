#ifndef OBJ_FILE_1
#define OBJ_FILE_1
/**
* struct dog - structure about a dog
* @name: First member
* @age: Second member
* @owner: Third member
*
* Description - Long description
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
