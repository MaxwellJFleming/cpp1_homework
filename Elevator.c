#include <stdio.h>
#include <stdlib.h>

int numFloors = 0;

int floorChosen = 0;

void inputNumFloors()
{
    printf("Enter the number of floors: ");
    scanf("%d", &numFloors);
}

int chooseFloor()
{
    printf("Which floor do you want to go to? ");
    scanf("%d", &floorChosen);
}

void elevatorUp()
{
    for (int i = 0; i <= floorChosen; i++) {
        printf("%d\n", i);
    }
    printf("You've arrived at floor %d\n", floorChosen);
}

void exitPrompt()
{
    int choice = 0;
    printf("\nEnter 0 to ride the elevator again. Enter 1 to exit the elevator and close the program.\n");
    scanf("%d", &choice);
    if (choice == 1) {
        exit(0);
    }
}

int main()
{
    inputNumFloors();
    
    chooseFloor();

    if (floorChosen == 0) {
        printf("\nYou're already on the first floor.\n");
    }
    else if (floorChosen > numFloors) {
        printf("\nThe floor you've chosen doesn't exist.\n");
    }
    else if (floorChosen < 0) {
        printf("\nThis elevator doesn't go down.\n");
    }
    else {
        printf("\nElevator going up!\n");
        elevatorUp();
    }

    exitPrompt();

    main();

    return 0;
}