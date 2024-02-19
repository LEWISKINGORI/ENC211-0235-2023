#include <stdio.h>
#include <stdlib.h>


int main ( void )
{
    float a;

    printf("Please enter the distance in miles: \n");
    scanf("%f", &a);



        printf("%f miles M = %f  kilometres KM\n " ,
                    a , (a*1.609));




    return 0 ;

};
