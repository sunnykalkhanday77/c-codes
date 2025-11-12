#include <stdio.h>
#include <string.h>  // For strlen() in validation

// Simple struct to store user details
struct User {
    char name[50];
    int employeeNo;
    char username[50];
    char mobile[15];  // e.g., "9876543210"
    char id[50];
    char password[50];  // In real app, hash this!
    char otp[10];
    char email[100];
};

void printSpace(int lines) {
    /**
     * Prints 'lines' number of blank lines for spacing.
     * Each line has no leading spaces (cleaner).
     */
    for (int i = 0; i < lines; i++) {
        printf("\n");
    }
}

void greet() {
    // ANSI colors: \033[32m for green, \033[0m to reset
    printf("\033[32m");  // Green text
    printf("========================================\n");
    printf("    Welcome to Our Website, Sir!        \n");
    printf("    How are you? Let's proceed.         \n");
    printf("========================================\n");
    printf("\033[0m");  // Reset color
    printSpace(2);  // Two blank lines
}

void details(struct User *user) {
    printf("\033[32m");  // Green for prompts
    printf("=== Enter Your Details Below ===\n");
    printf("\033[0m");
    
    printf("Enter your username: ");
    scanf(" %s", user->username);  // Space before %s to eat whitespace
    printSpace(1);
    
    printf("Enter your mobile no (+91): ");
    scanf(" %s", user->mobile);
    printSpace(1);
    
    printf("Enter your ID: ");
    scanf(" %s", user->id);
    printSpace(1);
    
    printf("Enter your password (it won't be echoed in real apps): ");
    scanf(" %s", user->password);  // Note: In real apps, hide input
    printSpace(1);
    
    printf("Enter your OTP to verify: ");
    scanf(" %s", user->otp);
    printSpace(1);
    
    printf("Enter your email ID: ");
    scanf(" %s", user->email);
    printSpace(1);
    
    printf("\033[32m");
    printf("=== Details Submitted! ===\n");
    printf("\033[0m");
}

int main() {
    struct User user;
    
    // Input for name and employee no (improved)
    printf("\033[34m");  // Blue for main prompts
    printf("Enter your name: ");
    scanf(" %s", user.name);  // %s for string, space to handle whitespace
    
    // Basic validation
    if (strlen(user.name) == 0) {
        printf("Error: Name cannot be empty!\n");
        return 1;  // Exit with error
    }
    
    printf("Enter your employee number: ");
    scanf("%d", &user.employeeNo);
    printf("\033[0m");  // Reset color
    
    greet();
    details(&user);  // Pass struct by pointer to store data
    
    // Summary output (enhanced: shows collected data)
    printSpace(1);
    printf("\033[32m");  // Green summary
    printf("========================================\n");
    printf("    Thank you, %s!                      \n", user.name);
    printf("    Employee No: %d                     \n", user.employeeNo);
    printf("    Username: %s                        \n", user.username);
    printf("    Mobile: +91-%s                      \n", user.mobile);
    printf("    Email: %s                           \n", user.email);
    printf("    Account verified with OTP: %s       \n", user.otp);
    printf("========================================\n");
    printf("\033[0m");
    
    printf("Welcome to the next step!\n");
    
    return 0;
}
