#include <stdio.h>
#include <stdlib.h>


int main ( void )
{
    float a , b, c ;

    printf("Please enter the temperature: \n");
    scanf("%f", &a);
    printf("Please enter the ending point: \n");
    scanf("%f", &b);
    printf("Please enter the increment: \n");
    scanf("%f", &c);
    printf("This is a table showing conversion of farenheit to celsius")
    while ( a <= b )
    {


        printf("%f degrees F = %f  degrees C\n " ,
                    a , (a-32.0 )*5.0/9.0 );


        a = a + c;
    }
    return 0 ;

};
