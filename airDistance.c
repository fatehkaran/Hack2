/* Author: Fateh Karan Singh Sandhu
*  Date: August 30, 2018
*
* This program computes the distance between these two locations using
* the Spherical Law of Cosines.
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define radius 6371 // this defines the value of radius of earth in km

int main ( int argc, char **argv) {

double latitudeA, latitudeB;
double longitudeA, longitudeB;

double latitudeA_R, latitudeB_R;
double longitudeA_R, longitudeB_R;

printf("Please enter the latitude of location A: \n");
scanf ("%lf", &latitudeA);

printf("Please enter the longitude of location A: \n");
scanf ("%lf", &longitudeA);

printf("Please enter the latitude of location B: \n");
scanf ("%lf", &latitudeB);

printf("Please enter the longitude of location B: \n");
scanf ("%lf", &longitudeB);

latitudeA_R = (latitudeA / 180) * M_PI;
latitudeB_R = (latitudeB / 180) * M_PI;
longitudeA_R = (longitudeA / 180) * M_PI;
longitudeB_R = (longitudeB / 180) * M_PI;

double differenceOfLongitudes;
differenceOfLongitudes = longitudeB_R - longitudeA_R;

double distance;

// spherical law of cosines

distance = acos ((sin(latitudeA_R) * sin(latitudeB_R)) + (cos(latitudeA_R) * cos(latitudeB_R) * cos(differenceOfLongitudes))) * radius;

printf ("Location Distance \n");
printf ("========================= \n");
printf ("Origin: (%f , %f) \n",latitudeA, longitudeA);
printf ("Destination: (%f, %f) \n\n", latitudeB, longitudeB);
printf ("Air distance is %f kms\n", distance);

  return 0;
}
