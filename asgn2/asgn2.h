#ifndef __asgn2__
#define __asgn2__

/* the two lines above check to ensure
we haven't already included this header*/


/* your functions go here */
// Note: main() goes in the asgn2.c file
int PowerOfTwo(int n) {
    return (n != 0) && ((n & (n - 1)) == 0);
}

void cubeOfOdd(int n) {
    for (int i = 1; i < n; i += 2) {
        printf("%d, ", i * i * i);//gives the cubed value for each odd number
    }
}

void introToCS330(int n) {
    if (n % 3 == 0 && n % 7 == 0) {
        printf("UAB CS 330\n");//says if the number is divisible by 3 or 7
    } else if (n % 7 == 0) {
        printf("UAB\n");
    } else if (n % 3 == 0) {
        printf("CS\n");
    } else if (PowerOfTwo(n)) {
        printf("HELLO\n");
    } else {
        printf("%d\n", n * n * n); // Cube of n
    }
}

void printHELLO(int n) {
    for (int i = 0; i <= n; i++) {
        if (PowerOfTwo(i)) {
            printf("HELLO ");
        } else {
            printf("%d ", i);
        }
    }
    printf("\n"); // Add a newline character at the end.
}

void grader(float avg_exams, float avg_hw, int attendance) {
    if (attendance > 20 && avg_exams > 70 && avg_hw > 70 && (avg_exams > 85 || avg_hw > 85)) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

int paintGallons(float length, float width, float height) {
    // Calculate total surface area for paint
    float total_area = 2 * (length * height + width * height) + length * width;

    // Determines coverage per gallon 
    float coverage_per_gallon = 400.0;

    // Calculates the number of gallons required
    int gallons_needed = (int)ceil(total_area / coverage_per_gallon);

    return gallons_needed;


}




#endif