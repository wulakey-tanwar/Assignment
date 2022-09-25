#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int a , b;
    float m,n;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&m,&n);
    int sum = a + b;
    int diff =a - b;
    float  sum1 = m + n;
    float diff2 = m - n;
    printf("%d %d\n", sum,diff);
    printf("%.1f %.1f\n",sum1,diff2);
    
    return 0;
}
