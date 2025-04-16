#include<stdio.h>

struct Book {
	
	char title[100];
	char author[100];
	char price[100];	
};

int main() {
	
	struct Book Bookies[3];
	
	int i, j;
	for(i = 0; i < 3; i++) {
		
		printf("Enter details of book no. %d \n", (i+1));
		printf("Enter title \n");
		fgets(Bookies[i].title, 100, stdin);
		printf("Enter author \n");
		fgets(Bookies[i].author, 100, stdin);
		printf("Enter price \n");
		fgets(Bookies[i].price, 100, stdin);
	}
	
	for(i = 0; i < 3; i++) {
		
		printf("Details of book no. %d: \n", (i+1));
		printf("Title: %s", Bookies[i].title);
		printf("Author: %s", Bookies[i].author);
		printf("Price: %s", Bookies[i].price);
	}
	
	return 0;
}
