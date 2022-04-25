#include <stdio.h>
#include <stdlib.h>
#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40

int main()
{
    //declare varible
    int hours =0;
    double grossPay =0.0;
    double taxes =0.0;
    double netPay =0.0;

    printf("Please enter the number of house worked this weeks:");
    //input
    scanf("%d",&hours);
    //calculate
    if(hours<=40)
        grossPay= hours*PAYRATE;
    else
    {
        grossPay = hours*PAYRATE;
        double overTimePay =(hours-40)*(PAYRATE*1.5);
        grossPay+= overTimePay;
    }
    //calculate taxes
    if(grossPay<=300)
    {
        taxes =grossPay*TAXRATE_300;
    }
    else(grossPay>300 && grossPay<=450)
    {
        taxes = 300*TAXRATE_300;
        taxes+=(grossPay-300)*TAXRATE_150;


    }

    return 0;
}
