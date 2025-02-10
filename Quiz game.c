#include <stdio.h>
#include <unistd.h>  

int score = 0;

void spaces(int count) {
	int i;
    for (i = 0; i < count; i++) {  
        printf("  ");
    }
}

int main() {
    char name[30], ans1, ans2, ans3, ans4, ans5, ans6, ans7, ans8, ans9, ans10;
    int choice;

    printf("What's your name: ");
    scanf("%29s", name);
    
    printf("\n\n\n");
    spaces(20);
    printf("QUIZZES FOR KNOWLEDGE\n");

    spaces(21);
    printf("Knowledge is power\n");

    spaces(22);
    printf("Welcome %s\n\n\n", name);

    printf("-> Press 1 to start the game\n");
    printf("-> Press 0 to exit the game\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nThe game has started. You have to answer 10 questions.\n\n");
        sleep(1);

        printf("1. Which data type is used to store a single character in C?\n");
        printf("   a) int\n   b) float\n   c) char\n   d) string\n");
        printf("Answer: ");
        scanf(" %c", &ans1);
        if (ans1 == 'c') {
            printf("Correct!\n");
            score += 10;
        } else {
            printf("Wrong! Correct answer: c\n");
        }
        printf("Current Score: %d\n\n", score);

        printf("2. What is the correct format specifier for printing an integer in C?\n");
        printf("   a) %%c\n   b) %%d\n   c) %%f\n   d) %%s\n");
        printf("Answer: ");
        scanf(" %c", &ans2);
        if (ans2 == 'b') {
            printf("Correct!\n");
            score += 10;
        } else {
            printf("Wrong! Correct answer: b\n");
        }
        printf("Current Score: %d\n\n", score);

        printf("3. What function is used to take input from the user in C?\n");
        printf("   a) printf()\n   b) scanf()\n   c) input()\n   d) cin\n");
        printf("Answer: ");
        scanf(" %c", &ans3);
        if (ans3 == 'b') {
            printf("Correct!\n");
            score += 10;
        } else {
            printf("Wrong! Correct answer: b\n");
        }
        printf("Current Score: %d\n\n", score);

        printf("4. What happens if you forget to include 'return 0;' in main()?\n");
        printf("   a) The program will not compile\n   b) It may cause unexpected behavior\n   c) It will crash\n   d) The program runs without issues\n");
        printf("Answer: ");
        scanf(" %c", &ans4);
        if (ans4 == 'b') {
            printf("Correct!\n");
            score += 10;
        } else {
            printf("Wrong! Correct answer: b\n");
        }
        printf("Current Score: %d\n\n", score);

        printf("5. Which symbol is used for a single-line comment in C?\n");
        printf("   a) //\n   b) /* */\n   c) #\n   d) --\n");
        printf("Answer: ");
        scanf(" %c", &ans5);
        if (ans5 == 'a') {
            printf("Correct!\n");
            score += 10;
        } else {
            printf("Wrong! Correct answer: a\n");
        }
        printf("Current Score: %d\n\n", score);

        printf("6. What does the sizeof operator return in C?\n");
        printf("   a) Memory address of a variable\n   b) Number of elements in an array\n   c) Size of a data type in bytes\n   d) Value of a variable\n");
        printf("Answer: ");
        scanf(" %c", &ans6);
        if (ans6 == 'c') {
            printf("Correct!\n");
            score += 10;
        } else {
            printf("Wrong! Correct answer: c\n");
        }
        printf("Current Score: %d\n\n", score);

        printf("7. What is a pointer in C?\n");
        printf("   a) A variable that stores an integer\n   b) A special type of array\n   c) A variable that stores the memory address of another variable\n   d) A function in C\n");
        printf("Answer: ");
        scanf(" %c", &ans7);
        if (ans7 == 'c') {
            printf("Correct!\n");
            score += 10;
        } else {
            printf("Wrong! Correct answer: c\n");
        }
        printf("Current Score: %d\n\n", score);

        printf("8. What happens if you access an array element beyond its size?\n");
        printf("   a) Compilation error\n   b) Runtime error\n   c) Undefined behavior\n   d) Program prints 0\n");
        printf("Answer: ");
        scanf(" %c", &ans8);
        if (ans8 == 'c') {
            printf("Correct!\n");
            score += 10;
        } else {
            printf("Wrong! Correct answer: c\n");
        }
        printf("Current Score: %d\n\n", score);

        printf("9. Which header file is required for dynamic memory allocation (malloc/free)?\n");
        printf("   a) stdlib.h\n   b) stdio.h\n   c) math.h\n   d) string.h\n");
        printf("Answer: ");
        scanf(" %c", &ans9);
        if (ans9 == 'a') {
            printf("Correct!\n");
            score += 10;
        } else {
            printf("Wrong! Correct answer: a\n");
        }
        printf("Current Score: %d\n\n", score);

        printf("10. What is the correct format specifier for printing a floating-point number in C?\n");
        printf("   a) %%d\n   b) %%c\n   c) %%f\n   d) %%s\n");
        printf("Answer: ");
        scanf(" %c", &ans10);
        if (ans10 == 'c') {
            printf("Correct!\n");
            score += 10;
        } else {
            printf("Wrong! Correct answer: c\n");
        }
        printf("Current Score: %d\n\n", score);

        printf("Game Over!\n");
        printf("Your Final Score: %d/100\n", score);

    } else if (choice == 0) {
        printf("The game has ended.\n");
    } else {
        printf("Invalid Number!\n");
    }

    return 0;
}

