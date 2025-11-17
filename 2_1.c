#include <stdio.h>
int main(){

    int a,b,c,d;  //Define Variables

printf("Enter the Length of your Reactangle: ");       //Take Length From User
scanf("%d",&a);                                       //Read Length
printf("Enter the Breadth of your Reactangle: ");     //Take breadth From user
scanf("%d",&b);                                      //Read Breadth           
c=a*b;                                        //Calculation of AREA
d=2*(a+b);                                    //calculation of PERIMETER
    
printf("The Area of the rectangle is:%d\n",c);     //Display OUTPUT
printf("Perimeter of the rectangle is:%d",d); 

return 0;
}
