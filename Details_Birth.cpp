#include <stdio.h>

struct Date {
	
	int day;
	int month;
	int year;
	
};

struct Person {
	
	char name[100];
	int age;
	struct Date birth;
	
};

struct Person k;
int main() {
	
	printf("Enter name \n");
	fgets(k.name, 100, stdin);
	printf("Enter age \n");
	scanf("%d", &k.age);
	printf("Enter birth date \n");
	printf("Enter day \n");
	scanf("%d", &k.birth.day);
	printf("Enter month \n");
	scanf("%d", &k.birth.month);
	printf("Enter year \n");
	scanf("%d", &k.birth.year);
	
	printf("Details: \n");
	printf("Name: %s", k.name);
	printf("Age: %d \n", k.age);
	printf("Birth date: \n");
	printf("Day: %d \n", k.birth.day);
	printf("Month: %d \n", k.birth.month);
	printf("Year: %d \n", k.birth.year);
	
	return 0;
	
}
