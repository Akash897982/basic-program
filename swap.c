 #include<stdio.h>
 #include<conio.h>
 void main(){
    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    
    a=a+b;
    b=a-b;
    a=a-b;

    printf("swapped number are : %d %d",a,b);
 }