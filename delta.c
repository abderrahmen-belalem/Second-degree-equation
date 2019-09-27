#include<stdio.h>

#include<math.h>


int main() {

    float a,b,c,x1,x2, x3, x4, x5, delta;

    printf("Enter the value a :\t");

    scanf ("%f",&a);

    printf("Enter the value b :\t");

    scanf ("%f",&b);

    printf("Enter the value c :\t");
    scanf ("%f",&c);

    delta = pow(b,2)-(4*a*c);

    printf ("Delta = %f \n", delta);

    if(delta<0){
 
    printf ("There are no solutions \n");

    }
else if(delta==0){

        printf("Multiplier solution \n");

        x1= -b/(a*2);

        printf ("The result is x1 = %f", x1);
    
    }
    else if(delta>0){

        x1= (-b)-sqrt(delta);

        x2= (-b)+sqrt(delta);

    	x3=2*a;

    	x4= x2/x3;

    	x5= x1/x3;

    printf("The result is x1 = %f \n" ,x5);

    printf("The result is x2 = %f " ,x4);

    }

    
}