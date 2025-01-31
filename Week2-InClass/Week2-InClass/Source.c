#include <stdio.h>
#include <stdlib.h>

// Define constants (if necessary)
// Example: #define PI 3.14159265358979323846
#define INPUTSIZE 100

// Function declarations
void greet(void);                    // Student 1
int add(int a, int b);               // Student 2
int subtract(int a, int b);          // Student 3
double calculateArea(double radius); // Student 4
unsigned long long factorial(int n); // Student 5
void displayMenu(void);             // Student 6

int main(void) {
    // Variable declarations
    int choice = 0;
    char input[INPUTSIZE]; // For safer input handling
			   
    // Display a welcome message
    printf("Welcome to the Collaborative Code Management Program!\n");

    // Call the display_menu() function
    displayMenu();

    // Accept user input for menu selection
    printf("\nEnter your choice: ");
    if (fgets(input, sizeof(input), stdin) != NULL) {
        // Parse the input (placeholder)
        // Example: sscanf_s(input, "%d", &choice);
        sscanf_s(input, "%d", &choice);
    }

    // Use a switch-case to handle menu options
    switch (choice) {
    case 1:
        greet(); // Call greet function
        break;
    case 2:
        // Call add function (placeholder)
        break;
    case 3:
        // Call subtract function (placeholder)
        break;
    case 4:
        // Call calculate_area function (placeholder)
        break;
    case 5:
        // Call factorial function (placeholder)
        break;
    default:
        printf("Invalid choice. Please try again.\n");
        break;
    }

    return 0;
}

// Function definitions (placeholders)

// Student 1: Implement greet() function
void greet(void) {
    printf("Welcome to our Program!\n");
}

// Student 2: Modify add() function to take user input
int add(int a, int b) {
    // Placeholder
    int result = a + b;
    return result; // Replace with actual logic
}

// Student 3: Complete subtract() function
int subtract(int a, int b) {
    int result = a - b;
    return result; // Replace with actual logic
}

// Student 4: Implement calculate_area() function
double calculateArea(double radius) {
   double result = pow(2,radius) * 3.14
   return result; // Replace with actual logic
}

// Student 5: Develop factorial() function
unsigned long long factorial(int n) {
    // Store factorial result
    int factorial = 1;

    // If n is 0, 0! = 0, return 0
    if (n == 0)
    {
        return 0;
    }
    // Else if n < 0, convert it to absolute value and then calculate
    else if (n < 0) {
        n = abs(n);
    }

    // Iterate over n -> 0 and multiply
    for (int i = n; i > 0; i--) {
        factorial = i * factorial;
    }

    return (long long)factorial;
}

// Student 6: Implement display_menu() function
void displayMenu(void) {
    // Placeholder
    printf("Menu:\n"
        "1. Greet\n"
        "2. Add two numbers\n"
        "3. Subtract two numbers\n"
        "4. Calculate the area of a circle\n"
        "5. Calculate the factorial of a number\n");
}

