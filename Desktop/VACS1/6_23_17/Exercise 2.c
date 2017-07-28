#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>

//Initializing the values for different time zones
#define BST (1)
#define CDT (-5)
#define EDT (-4)
#define PST (-7)
#define CET (1)
#define AKDT (-7)
#define MSK (3)
#define JST (9)
#define UTC (2)
#define AECT (10)
#define NSZT (12)

//Call function that determines whether or not it is a good time to call
void call(int *px)
{
    if ( *px>7){
        char *pres="Not a good time to call\n";
        printf("%s",pres);
    }

    else{
       char *pres= "Go ahead and call\n";
       printf("%s",pres);
    }
}
void main()
{
    int x,i;
    time_t raw_time;
    struct tm *ptr_ts;

    time ( &raw_time );
    ptr_ts = gmtime (&raw_time);

//Prints the various time differences between these cities and Houston
    printf("Time difference from NYC: %d\n",x=abs(CDT-EDT));
    call(&x);
    printf("Time difference from LA: %d\n",x=abs(CDT-PST));
    call(&x);
    printf("Time difference from Juneau: %d\n",x=abs(CDT-AKDT));
    call(&x);
    printf("Time difference from London: %d\n",x=abs(CDT-BST));
    call(&x);
    printf("Time difference from Moscow: %d\n",x=abs(CDT-MSK));
    call(&x);
    printf("Time difference from Tokyo: %d\n",x=abs(CDT-JST));
    call(&x);
    printf("Time difference from Ankara: %d\n",x=abs(CDT-UTC));
    call(&x);
    printf("Time difference from Sydney: %d\n",x=abs(CDT-AECT));
    call(&x);
    printf("Time difference from Wellington: %d\n",x=abs(CDT-CET));
    call(&x);

    return EXIT_SUCCESS;
}
