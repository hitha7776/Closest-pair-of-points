/* ============================================================
 * File: input_output.c
 * Purpose : Handles input and output operations
 * ============================================================ */

#include <stdio.h>

/* Structure to represent a point */
struct Point {
    int x, y;
};

/* ============================================================
 * Function: readInput
 * Purpose : Reads point coordinates from the user
 * Input   : Array of points and number of points
 * Output  : Stores values in array
 * ============================================================ */
void readInput(struct Point P[], int n) {

    printf("Enter coordinates (x y):\n");

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &P[i].x, &P[i].y);
    }
}

/* ============================================================
 * Function: displayOutput
 * Purpose : Displays minimum distance result
 * Input   : Minimum distance value
 * Output  : Prints result on screen
 * ============================================================ */
void displayOutput(float minDist) {

    printf("\nMinimum distance between closest pair = %.6f\n",
           minDist);
}
