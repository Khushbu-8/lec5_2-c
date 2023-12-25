#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c;
clrscr();
printf("Find the minimume value \n");
printf("Enter first value  : ");
scanf("%d",&a);
printf("Enter second valu : ");
scanf("%d",&b);
printf("Enter third value :");
scanf("%d",&c);
if(a<b){
       if(a<c){
	printf("minimum number is %d",a);
	}else{
	     printf("Minimum number is %d",c);
	     }
}else {
	    if(b<c){
	    printf("Minimum number is %d",b);
	    } else{
	    printf("Minimum number is %d",c);
	    }
	    }
getch();
}
