Write a function to add two integers.

#include<stdio.h> 
void main() 
{ 
       int a,b; 
       printf("Enter Two Number : "); 
       scanf("%d%d",&a,&b); 
       sum(a,b); 
       getch(); 
} 
      sum(int x,int y) 
  { 
       int z; 
       z=x+y; 
       printf("Sum of Two Number is : %d",z); 
       return 0; 
}
