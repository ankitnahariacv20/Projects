#include <stdio.h>
#include <conio.h>
#include <math.h>
float ar(float, float, float);
int main()
{
    float a, b, c;

    printf("Enter the length of the three sides of the Triangle.\n");

    scanf("%f %f %f", &a, &b, &c);

    printf("Area of the triangle is %f square units\n", ar(a, b, c));

    return 0;
}
float ar(float x, float y, float z)
{
    float s = (x + y + z) / 2;

    float a = sqrt(s * (s - x) * (s - y) * (s - z));

    return a;
}
