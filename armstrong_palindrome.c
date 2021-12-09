#include<stdio.h>
#include<math.h>

void main(){
    int a,b,c,d,e,f,g,l,j;

    printf("Enter a three number : ");
    scanf("%d",&a);
    
    printf("The number is %d",a);

    b=a/10; 
    c=a%10; 
    d=b/10; 
    e=b%10; 
    f=d/10; 
    g=d%10; 

    l =(pow(c,3))+(pow(e,3))+(pow(g,3));
    
    if(a==l){
        printf("\nIts an armstrong number");
    }else{
        printf("\nIts not an armstrong number");
    }
    j=g*100+e*10+c*1;
    if(j==a){
        printf("\nIts a palindrome number");
    }else{
        printf("\nIts not a palindrome number");
    }


}