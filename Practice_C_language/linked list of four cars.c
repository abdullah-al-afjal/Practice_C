#include <stdio.h>
#include <stdlib.h>

struct Car
{
    char name[20];
    struct Car* next;
};

int main()
{

    struct Car* car1 = malloc(sizeof(struct Car));
    sprintf(car1->name, "Car 1");

    struct Car* car2 = malloc(sizeof(struct Car));
    sprintf(car2->name, "Car 2");

    struct Car* car3 = malloc(sizeof(struct Car));
    sprintf(car3->name, "Car 3");

    struct Car* car4 = malloc(sizeof(struct Car));
    sprintf(car4->name, "Car 4");

    car1->next = car2;
    car2->next = car3;
    car3->next = car4;
    car4->next = NULL;

     struct Car* currentCar = car1;

     while (currentCar != NULL)
        {
        printf("Car: %s\n", currentCar->name);
        currentCar = currentCar->next;
        }
    free(car1);
    free(car2);
    free(car3);
    free(car4);

    getch();
}

