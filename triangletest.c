#include <stdio.h>
#include <cs50.h>

bool triangletest(float a, float b, float c);

int main(void)
{
    float a = get_float("Length of side a: ");
    float b = get_float("Length of side b: ");
    float c = get_float("Length of side c: ");

    bool i = triangletest(a, b, c);

    if (i == true)
    {
        printf("This is a valid triangle.\n");
    }
    else
    {
        printf("This is an invalid triangle.\n");
    }
}

bool triangletest(float a, float b, float c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return false;
    }
    else if ((a + b <= c) || (b + c <= a) || (a + c <= 0))
    {
        return false;
    }
    return true;
}