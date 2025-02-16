#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int choice;

struct Address {
    char city[20];
    char road[50];
    char hname[30];
    int zip;
};

struct Appe {
    int weight;
    int height;
};

struct Customer {
    char name[50];
    struct Address addr;
    int age;
    struct Appe ap;
};

void spaces(int count) {
    for (int i = 0; i < count; ++i) {
        printf(" ");
    }
}

void buy() {
    printf("Buying process...\n");
}

void menu() {
    printf("1. Buy an item\n");
    printf("2. Workout plan\n");
    printf("3. Change the plan\n");
    printf("4. Info\n");
    printf("5. Exit\n");

    printf("Enter your choice (enter the number): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            buy();
            break;

        case 2:
            printf("Beginner Workout Plan (3-4 Days a Week)\n");
            printf("Day 1 – Push (Chest, Shoulders, Triceps)\n🔹 Bench Press – 4x8\n🔹 Shoulder Press – 3x10\n");
            break;

        case 3:
            printf("Updated Workout Plan...\n");
            break;

        case 4: {
            struct Customer newc;
            FILE *file = fopen("gym.txt", "r");
            if (file == NULL) {
                printf("Error opening file!\n");
                return;
            }
            while (fscanf(file, "%s %d %s %s %s %d %d %d", newc.name, &newc.age, newc.addr.city, newc.addr.road, newc.addr.hname, &newc.addr.zip, &newc.ap.height, &newc.ap.weight) != EOF) {
                printf("Name: %s, Age: %d, City: %s, Road: %s, House: %s, Zip: %d, Height: %d, Weight: %d\n", newc.name, newc.age, newc.addr.city, newc.addr.road, newc.addr.hname, newc.addr.zip, newc.ap.height, newc.ap.weight);
            }
            fclose(file);
            break;
        }

        case 5:
            printf("Thank you!\n");
            exit(0);

        default:
            printf("Invalid choice!\n");
    }
}

void regi() {
    struct Customer newc;
    FILE *file = fopen("gym.txt", "w");
    if (file == NULL) {
        printf("Error!\n");
        return;
    }

    printf("Name: ");
    scanf("%s", newc.name);
    printf("Age: ");
    scanf("%d", &newc.age);
    printf("City: ");
    scanf("%s", newc.addr.city);
    printf("Road: ");
    scanf("%s", newc.addr.road);
    printf("House name: ");
    scanf("%s", newc.addr.hname);
    printf("Zipcode: ");
    scanf("%d", &newc.addr.zip);
    printf("Height (m): ");
    scanf("%d", &newc.ap.height);
    printf("Weight (kg): ");
    scanf("%d", &newc.ap.weight);

    printf("Registration successful!\n");

    float bmi = (float)newc.ap.weight / (newc.ap.height * newc.ap.height);
    fprintf(file, "%s %d %s %s %s %d %d %d %.2f\n", newc.name, newc.age, newc.addr.city, newc.addr.road, newc.addr.hname, newc.addr.zip, newc.ap.height, newc.ap.weight, bmi);

    fclose(file);

    printf("Your BMI is %.2f. ", bmi);
    if (bmi <= 18.4) {
        printf("Underweight.\n");
    } else if (bmi <= 24.9) {
        printf("Normal.\n");
    } else if (bmi <= 39.9) {
        printf("Overweight.\n");
    } else {
        printf("Obese.\n");
    }
}

void registered() {
    int reg;
    char name[50];
    printf("Are you already registered? (1 for Yes, 0 for No): ");
    scanf("%d", &reg);

    if (reg == 1) {
        printf("Enter your Name: ");
        scanf("%s", name);

        struct Customer newc;
        FILE *file = fopen("gym.txt", "r");
        if (file == NULL) {
            printf("Error opening file!\n");
            return;
        }

        int found = 0;
        while (fscanf(file, "%s %d %s %s %s %d %d %d", newc.name, &newc.age, newc.addr.city, newc.addr.road, newc.addr.hname, &newc.addr.zip, &newc.ap.height, &newc.ap.weight) != EOF) {
            if (strcmp(newc.name, name) == 0) {
                printf("Welcome %s!\n", newc.name);
                found = 1;
                break;
            }
        }
        fclose(file);

        if (!found) {
            printf("User not found!\n");
            return;
        }

        menu();
    } else if (reg == 0) {
        regi();
    } else {
        printf("Invalid Number!\n");
    }
}

int main() {
    spaces(30);
    printf("Welcome to FitGym\n");

    registered();

    return 0;
}
