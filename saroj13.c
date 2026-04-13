//Write a program to find the distance between two 6 9points (x1, y1) and (x2,y2). Read
//coordinate from user
#include <stdio.h>
#include <math.h>   
int main() {
    float x1, y1, x2, y2, distance;

    // Read coordinates from user
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    
    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);


    // Calculate the distance using the distance formula
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // Display the result
    printf("The distance between the points  is: %.2f\n",  distance);

    return 0;
}

