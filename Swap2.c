#include <stdio.h>
int main(){
int x,y,valuex,valuey;
printf("Enter number x:\n");
scanf("%d",&x);
printf("Enter number y:\n");
scanf("%d",&y);

valuex = x - 2;
valuey = y + 2;
printf("After swapping x and y = %d and %d\n",valuex,valuey);
return 0;
}
