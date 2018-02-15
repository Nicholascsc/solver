#include<stdio.h>
#include<stdlib.h>
int main(){
	
//The Equation will has complex root if the discriminant is negative,will have repeated root if the value of the discriminant (square root) is zero and 
//will solve the equation and display the right result if the discriminants is non-negative.

float a,b,c,value,answer,root1,root2;

printf("ENTER THE VALUE OF A\n"); 
scanf("%f",&a);     //Read the actual value of a

printf("ENTER THE VALUE OF B\n");
scanf("%f",&b);     //Read the actual value of b

printf("ENTER THE VALUE OF C\n");
scanf("%f",&c);     //Read the actual value of c

value=(b*b)-(4*a*c);    //calculating the values a,b,c which are inside the square root
answer=(value)*0.5 ;   //Square root of the value calculated

if(answer>=0){                    //if the discriminant is non-negative 
	root1=(-b+answer)/(2.0*a);   //calculating the value of root1(first solution of the equation) if the value gotten from answer is greater than or equal to zero
	root2=(-b-answer)/(2.0*a);   //calculating the value of root2(second solution of the equation) if the value gotten from answer is greater than or equal to zero
	
	printf("THE VALUE OF THE FIRST ROOT IS :%f\n",root1); //display the result
	printf("THE VALUE OF THE SECOND ROOT IS: %f\n",root2); //display the result
	
} else if(answer==0) {   //if the discriminant is equal to zero
	printf("THE REPEATED ROOT IS %f\n",-b/(2*a)); 
}else{         //if the discriminant is negative
printf("THERE IS NO REAL VALUE %f\n",answer); //display the result
}
return 0;






}
