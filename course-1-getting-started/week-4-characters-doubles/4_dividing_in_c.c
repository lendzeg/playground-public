/*
Nelson Rodriguez
2025-03-13
================

Activity: divide numbers
========================

When Rémi came to the US (to visit Petra to make this MOOC) he brought his favorite cookie recipe!
When trying to bake the cookies he realized that ovens in the US show temperature in degrees Fahrenheit, 
but the cookie recipe called for a temperature in degrees Celsius. We need your help!

Please write a C-program that reads a decimal number representing a temperature in degrees 
Celsius and prints out the corresponding temperature in degrees Fahrenheit with 1 decimal place. 
Here is the conversion formula:

Temperature (°F) = Temperature (°C) × 9.0 / 5.0 + 32.0
*/

#include <stdio.h>

int main(void){
    double c;
    scanf("%lf", &c);
    printf("%.1lf", c * 9.0 / 5.0 + 32.0);
    return 0;
}