//WAP that finds an angle between clock hands for the provided value of Minutes and Hours. 

#include <stdio.h>

void main(){
    float hours,minutes;

    printf("Enter no of hours:");
    scanf("%f", &hours);
    printf("Enter no of minutes:");
    scanf("%f", &minutes);


    float total_hours = (hours*30.0)+ 0.5*minutes;
    float total_minutes = 6*minutes;

    float angles = total_hours-total_minutes;

    if(angles<0){
        angles = -angles;
    }

    if(angles>180){
        angles = angles - 180;
    }

    printf("Angle between %f hours and %f minutes is %f", hours,minutes,angles);
}