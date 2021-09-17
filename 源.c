#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("a=%d,b=%d", a, b);

    float pai = 3.14;
    float r, v;
    scanf("%f/n", &r);
    v = r * r * r * pai * 4 / 3;
    printf("v = %.2f\n", v);

    float e = 2.71828;
    float a, x, y;
    scanf("%f %f", &a, &x);
    y = sqrt(a * x) + log(a + x) + pow(e, x);
    printf("y = %.2f", y);

    int a, b, s, sum;
    scanf("%d %d", &a, &b);
    s = 100 * b + 100 * (100 - a);
    sum = (100 * 100 - s) / 2;
    printf("%d", sum);



}