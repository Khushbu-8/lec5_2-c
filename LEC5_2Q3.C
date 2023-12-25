#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,d,e;
clrscr();
printf("Find the Maximum  value \n");
printf("Enter first value  : ");
scanf("%d",&a);
printf("Enter second value : ");
scanf("%d",&b);
printf("Enter third value :");
scanf("%d",&c);
printf("Enter fourth value :");
scanf("%d",&d);
printf("Enter fifth value :");
scanf("%d",&e);
if(a>b){
       if(a>c){
	      if(a>d){
		      if(a>e){
			printf("max number is %d",a);
			}
			else{
			printf("Max mumber is %d",e);
			}
	       }else{
		printf("max number is %d",d);
		}

}else {
	    if(b>c){
		  if(b>d){
			 if(b>e){
			     printf("Max number is %d",b);
			 } else{
			  printf("Max number is %d",e);
			  }
		   } else{
			 printf("max number is %d",d);
			}
	     }else{
	       printf("max number is %d",c);
	      }
	    }
	    }
getch();
}
