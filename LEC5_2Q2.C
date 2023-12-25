#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,d;
clrscr();
printf("Find the minimume value \n");
printf("Enter first value  : ");
scanf("%d",&a);
printf("Enter second valu : ");
scanf("%d",&b);
printf("Enter third value :");
scanf("%d",&c);
printf("Enter fourth value :");
scanf("%d",&d);
if(a>b){
       if(a>c){
	      if(a>d){
		printf("max number is %d",a);
		}
	       }else{
		printf("max number is %d",d);
		}

}else {
	    if(b>c){
		  if(b>d){
		     printf("Max number is %d",b);
		    } else{
		      printf("Max number is %d",d);
		     }
	     }else{
		 printf("max number is %d",c);
	     }
	    }
getch();
}
