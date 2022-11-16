#include <stdio.h>

struct User
{
	char *email;
	char *name;
	int age;
};

int main(void)
{
	struct User user;
	struct User *ptr;

	ptr = &user;

	(*ptr).name = "Martin Gitau";
	(*ptr).email = "gitau.marto@gmail.com";
	(*ptr).age = 26;

	printf("%s\n", ptr->name);

	return (0);
}
