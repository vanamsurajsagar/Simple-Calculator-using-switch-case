#include <stdio.h>

// Function prototypes (declarations)
void getMarks(float marks[], int totalSubjects);
float calculateAverage(float marks[], int totalSubjects);

int main() {
    int subjects;

    // 1. Ask for the total number of subjects
    printf("Enter the number of subjects: ");
    scanf("%d", &subjects);

    // Create an array to store the marks
    float studentMarks[subjects];

    // 2. Call function to input marks
    getMarks(studentMarks, subjects);

    // 3. Call function to compute the average
    float avg = calculateAverage(studentMarks, subjects);

    // 4. Print the final result
    printf("\n--- Final Result ---\n");
    printf("The Student's Average Score is: %.2f\n", avg);

    return 0;
}

// Function to take marks input from the user
void getMarks(float marks[], int totalSubjects) {
    for (int i = 0; i < totalSubjects; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
    }
}

// Function to calculate the average of the marks array
float calculateAverage(float marks[], int totalSubjects) {
    float sum = 0.0;
    
    for (int i = 0; i < totalSubjects; i++) {
        sum += marks[i];
    }
    
    return sum / totalSubjects;
}
