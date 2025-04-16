#include <stdio.h>
#include <stdlib.h>

struct Car {
    char model[50];
    int year;
    float price;
};

int main() {
    int n;
    printf("Enter the number of cars: ");
    scanf("%d", &n);

    struct Car* cars = (struct Car*)malloc(n * sizeof(struct Car));
    if (cars == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter details for car %d:\n", i + 1);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Year: ");
        scanf("%d", &cars[i].year);
        printf("Price: ");
        scanf("%f", &cars[i].price);
    }

    printf("\nCar Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Car %d:\n", i + 1);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: %.2f\n", cars[i].price);
    }

    free(cars);

    return 0;
}

