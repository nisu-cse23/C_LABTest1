#include<stdio.h>
int main(){
    int x,y,x1=2,x2=5,y1=6,y2=1;
    printf("Enter the value of x and y;");
    scanf("%d%d",&x,&y);
  

  if(x>=x1 && x<=x2 && y<=y1 && y>=y2){
    printf("The  point(%d ,%d)is inside of the rectangle.\n",x,y);
  }
  else{
    printf("The point (%d,%d)is outside of the rectangle:\n",x,y);
  }
  return 0;

}