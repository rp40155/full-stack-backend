//Switch case(Integer)

#include <stdio.h>
#include <math.h>
int main()
{
    int day = 6;
    switch (day)
    {
    case 1:
        printf("Monday \n");
        break;
    case 2:
        printf("Tuesday \n");
        break;
    case 3:
        printf("Wednesday \n");
        break;
    case 4:
        printf("Thursday \n");
        break;
    case 5:
        printf("Friday \n");
        break;
    case 6:
        printf("Saturday \n");
        break;
    case 7:
        printf("Sunday \n");
        break;

    default:
        printf("Invalid Entry by User");
        printf("Thank You");
        break;
    }
}


//switch case (character)
#include <stdio.h>
#include <math.h>
int main()
{
    int day = 'w';
    switch (day)
    {
    case 'm':
        printf("Monday \n");
        break;
    case 'T':
        printf("Tuesday \n");
        break;
    case 'w':
        printf("Wednesday \n");
        break;
    case 't':
        printf("Thursday \n");
        break;
    case 'f':
        printf("Friday \n");
        break;
    case 's':
        printf("Saturday \n");
        break;
    case 'S':
        printf("Sunday \n");
        break;

    default:
        printf("Invalid Entry by User");
        printf("Thank You");

        break;
    }
}
