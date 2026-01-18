#include <stdio.h>
int main() 
{
    float fahrenheit,celsius;
    fahrenheit=printf("enter value: ");
    scanf("%f",&fahrenheit);
    celsius=((fahrenheit-32)*5)/9;
    printf("Temperature in ccelsius : %.2f",celsius);
    
}
