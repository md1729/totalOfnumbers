/*Example 6: Write a C Program that performs the operation c=a+b when the entered numbers a and b are greater than 50 or
 prints these numbers are not appropriate.*/
 #include<stdio.h>
 int main(){
 int a,b,c;
 
 printf("Enter two numbers:\n");
 scanf("%d%d",&a,&b);
 
 if(a>50 && b>50){
 	c=a+b;
 	printf("TOTAL:%d\n",c);
 } else{
 	printf("Numbers are not appropriate.\n");
 }	
 
    return 0;	
 }
