#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>

#define BST (1)
#define CDT (-5)
#define EDT (-4)
#define PST (-7)
#define CET (1)
#define AKDT (-9)
#define MSK (3)
#define JST (9)
#define UTC (2)
#define AECT (10)
#define NSZT (12)

void main()
{
    time_t raw_time;
    struct tm *ptr_ts;

    time ( &raw_time );
    ptr_ts = gmtime (&raw_time);

    printf("Time difference from NYC: %d\n",(CDT-EDT));
    printf("Time difference from LA: %d\n",(CDT-PST));
    printf("Time difference from Juneau: %d\n",(CDT-AKDT));
    printf("Time difference from London: %d\n",(CDT-BST));
    printf("Time difference from Moscow: %d\n",(CDT-MSK));
    printf("Time difference from Tokyo: %d\n",(CDT-JST));
    printf("Time difference from Ankara: %d\n",(CDT-UTC));
    printf("Time difference from Sydney: %d\n",(CDT-AECT));
    printf("Time difference from Wellington: %d\n",(CDT-CET));

    return EXIT_SUCCESS;
}

