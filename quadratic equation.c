#include <stdio.h>
#include <conio.h>
#include <math.h>
float roots(float, float, float);
int main()
{
    float p,q,r;
    printf("Enter the values of a,b,c of quadratic equation ax^2+bx+c=0 \n");

    scanf("%f %f %f", &p, &q, &r);

    roots(p,q,r);

    getch();
    return 0;
}
float roots(float a, float b, float c)
 {
    float discriminant, root1, root2, realPart, imagPart;
    discriminant = b*b - 4 * a * c;        // Condition for real and different roots :-

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 is %f and root2 is %f", root1, root2);
    }

    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 and root2 is equal to %f", root1);       // Condition for real and equal roots:-
    }

    else
    {
        realPart = -b / (2 * a);                 // Condition for non-real roots:-
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root 1 is (%f + %f i) and root 2 is (%f - %f i) ", realPart, imagPart, realPart, imagPart);
    }
    return;
}
