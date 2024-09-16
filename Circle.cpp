#include<stdio.h>
#include<math.h>
int main(){
    int  r=7,x=5,y=7,x1,y1;
    int DistanceSquare,RadiusSquare;

    printf("Enter the value x1:");
    scanf("%d", &x1);;

    printf("Enter the value of y1:");
    scanf("%d",&y1);

    DistanceSquare=pow((x-x1),2)+pow((y-y1),2);

    RadiusSquare=r*r;

    
      if(DistanceSquare==RadiusSquare){

        printf("The point(%d,%d) is on the circle\n",x1,y1);
       }

    else if(DistanceSquare < RadiusSquare){

      printf("The point(%d,%d) is inside the circle.\n",x1,y1);

    }

    else{

     printf("The point(%d,%d) is outside the circle\n",x1,y1);

    }


}