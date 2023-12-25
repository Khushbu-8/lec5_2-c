#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,d,e;
clrscr();
printf("Find the Minimum value \n");
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
if(a<b){
       if(a<c){
	      if(a<d){
		      if(a<e){
			printf("Minimum number is %d",a);
			}
			else{
			printf("Minimu mumber is %d",e);
			}
	       }else{
		printf("Minimum number is %d",d);
		}
		}else{
		printf("Minimum number is %d",c);
		}

}else {
	    if(b<c){
		  if(b<d){
			 if(b<e){
			     printf("Minimum number is %d",b);
			 } else{
			  printf("Minimum number is %d",e);
			  }
		   } else{
			 printf("Minimum number is %d",d);
			}
	     }else{
	       printf("Minimum number is %d",c);
	      }
	    }

getch();
}

