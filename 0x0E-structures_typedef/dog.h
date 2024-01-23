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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
