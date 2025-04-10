#include <stdio.h>

int main()
{
    // variable declaration
    float x, y;
    // take input
    scanf("%f %f", &x, &y);
    // check condition for coordinates of a points
    if (x == 0 && (y > 0 || y < 0))
    {
        printf("Eixo Y\n");
    }
    else if (y == 0 && (x > 0 || x < 0))
    {
        printf("Eixo X\n");
    }
    else if (x > 0 && y > 0)
    {
        printf("Q1\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("Q2\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("Q3\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("Q4\n");
    }
    else
    {
        printf("Origem\n");
    }
}