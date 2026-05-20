#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Point {
    int x, y;
};

float min(float x, float y) {
    return (x < y) ? x : y;
}

float distance(struct Point p1, struct Point p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) +
                (p1.y - p2.y) * (p1.y - p2.y));
}

float bruteForce(struct Point P[], int n) {
    float minDist = 999999;

    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            if (distance(P[i], P[j]) < minDist)
                minDist = distance(P[i], P[j]);

    return minDist;
}

int compareX(const void *a, const void *b) {
    struct Point *p1 = (struct Point *)a;
    struct Point *p2 = (struct Point *)b;
    return (p1->x - p2->x);
}

int compareY(const void *a, const void *b) {
    struct Point *p1 = (struct Point *)a;
    struct Point *p2 = (struct Point *)b;
    return (p1->y - p2->y);
}

float stripClosest(struct Point strip[], int size, float d) {
    float minDist = d;

    qsort(strip, size, sizeof(struct Point), compareY);

    for (int i = 0; i < size; ++i)
        for (int j = i + 1; j < size &&
             (strip[j].y - strip[i].y) < minDist; ++j)
            if (distance(strip[i], strip[j]) < minDist)
                minDist = distance(strip[i], strip[j]);

    return minDist;
}

float closestUtil(struct Point P[], int n) {

    if (n <= 3)
        return bruteForce(P, n);

    int mid = n / 2;
    struct Point midPoint = P[mid];

    float dl = closestUtil(P, mid);
    float dr = closestUtil(P + mid, n - mid);

    float d = min(dl, dr);

    struct Point strip[n];
    int j = 0;

    for (int i = 0; i < n; i++)
        if (abs(P[i].x - midPoint.x) < d)
            strip[j++] = P[i];

    return min(d, stripClosest(strip, j, d));
}

float closest(struct Point P[], int n) {
    qsort(P, n, sizeof(struct Point), compareX);
    return closestUtil(P, n);
}

int main() {

    int n;

    printf("Enter number of points: ");
    scanf("%d", &n);

    struct Point P[n];

    printf("Enter coordinates (x y):\n");

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &P[i].x, &P[i].y);
    }

    printf("Minimum distance = %.6f\n", closest(P, n));

    return 0;
}
