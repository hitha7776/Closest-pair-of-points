```c id="m1n4x8"
/* ============================================================
 * File: helper_functions.c
 * Purpose : Contains helper functions for Closest Pair Problem
 * ============================================================ */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Structure to represent a point */
struct Point {
    int x, y;
};

/* ============================================================
 * Function: min
 * Purpose : Returns minimum of two float values
 * Input   : Two float numbers
 * Output  : Smaller float value
 * ============================================================ */
float min(float x, float y) {
    return (x < y) ? x : y;
}

/* ============================================================
 * Function: distance
 * Purpose : Calculates Euclidean distance between two points
 * Input   : Two Point structures
 * Output  : Distance value as float
 * ============================================================ */
float distance(struct Point p1, struct Point p2) {

    return sqrt((p1.x - p2.x) * (p1.x - p2.x) +
                (p1.y - p2.y) * (p1.y - p2.y));
}

/* ============================================================
 * Function: compareX
 * Purpose : Compares points according to x-coordinate
 * Input   : Two Point structures
 * Output  : Integer comparison result
 * ============================================================ */
int compareX(const void *a, const void *b) {

    struct Point *p1 = (struct Point *)a;
    struct Point *p2 = (struct Point *)b;

    return (p1->x - p2->x);
}

/* ============================================================
 * Function: compareY
 * Purpose : Compares points according to y-coordinate
 * Input   : Two Point structures
 * Output  : Integer comparison result
 * ============================================================ */
int compareY(const void *a, const void *b) {

    struct Point *p1 = (struct Point *)a;
    struct Point *p2 = (struct Point *)b;

    return (p1->y - p2->y);
}

/* ============================================================
 * Function: bruteForce
 * Purpose : Finds minimum distance for small point sets
 * Input   : Array of points and size
 * Output  : Minimum distance
 * ============================================================ */
float bruteForce(struct Point P[], int n) {

    float minDist = 999999;

    for (int i = 0; i < n; ++i) {

        for (int j = i + 1; j < n; ++j) {

            float d = distance(P[i], P[j]);

            if (d < minDist)
                minDist = d;
        }
    }

    return minDist;
}

/* ============================================================
 * Function: stripClosest
 * Purpose : Finds closest points inside strip region
 * Input   : Strip array, size, and minimum distance
 * Output  : Updated minimum distance
 * ============================================================ */
float stripClosest(struct Point strip[], int size, float d) {

    float minDist = d;

    qsort(strip, size, sizeof(struct Point), compareY);

    for (int i = 0; i < size; ++i) {

        for (int j = i + 1;
             j < size &&
             (strip[j].y - strip[i].y) < minDist;
             ++j) {

            float dist = distance(strip[i], strip[j]);

            if (dist < minDist)
                minDist = dist;
        }
    }

    return minDist;
}
```
