#include<stdio.h>
int main(){
    int HighTemp,TempMin,Humidity,RainFall,SunShine,Criteriamet=0;

    printf("Enter The TempHigh:");
    scanf("%d",&HighTemp);

    printf("Enter TempMin:");
    scanf("%d",&TempMin);

    printf("Enter the Humidity:");
    scanf("%d",&Humidity);

    printf("Enter the RainFall:");
    scanf("%d",&RainFall);

    printf("Enter the SunShine:");
    scanf("%d",&SunShine);

    if(HighTemp>=31 && HighTemp<=34)
    Criteriamet++;

    if(TempMin>=22 && TempMin<=23)
    Criteriamet++;

    if(Humidity>=89 && Humidity<=92)
    Criteriamet++;

    if(RainFall>=0 && RainFall<=10)
    Criteriamet++;

    if(SunShine>=6 && SunShine<=9)
    Criteriamet++;

    if(Criteriamet>3){
        printf("High\n");
    }
    if(Criteriamet==3){
        printf("Moderate\n");
    }
    if(Criteriamet<3){
        printf("No\n");

    }






}