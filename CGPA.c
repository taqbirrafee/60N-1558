#include<stdio.h>  
int main()   
{   
double English , Physics ,Maths, CSE, SocialStudy, CGPA , CGPAper ;  
English = 9.1;  
Physics = 8.5;  
Maths = 9.5;  
CSE =9.6;  
SocialStudy = 8.6;  
CGPA = (9.1+8.5+9.5+9.6+8.6)/(5.0);  
CGPAper = (float)(9.5 * (CGPA));  
printf("\n\n CGPA percentage is: %f",CGPAper);  
return (0);  
}
