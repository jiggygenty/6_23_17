/* Source code to calculate standard deviation.
 * taken from
 * http://www.programiz.com/c-programming/examples/standard-deviation
 * and modified by Martin Huarte, mhuartee@central.uh.edu, 2015,
 * for educational purposes.
 *
 * P L E A S E    C O M P I L E    W I T H:
 * gcc -o kk stdDeviation.c -lm
 *
 * */

#include <stdio.h>
#include <math.h>
void std(float data[],int *pn)
{
    int i;
    float mean=0.0, sum_deviation=0.0;

        for(i=0; i<*pn;++i)
    {
        mean+=data[i];
    }
    mean=mean/ *pn;
    for(i=0; i<*pn;++i)
    sum_deviation+=(data[i]-mean)*(data[i]-mean);

    printf("Standard Deviation = %.2f", sqrt(sum_deviation / *pn));
}
int main()
{
    int n, i;
    float data[100];
    printf("Enter number of datas( should be less than 100): ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0; i<n; ++i)
        scanf("%f",&data[i]);
    printf("\n");
    std(data,&n);
}
