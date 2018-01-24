# include<stdio.h> 
void main() 
{ 
 int i,n,s,p; 
 printf("Enter the limit : ") ; 
 scanf("%d",&n) ; 
 printf("\nEnter the number : ") ; 
 scanf("%d",&s) ; 
   printf("\nThe numbers divisible by %d are :\n\n",p) ; 
 for(i = 1 ; i <= n ; i++) 

  if(i % p == 0) 
    
   printf("%d\t",i) ; 
 }
