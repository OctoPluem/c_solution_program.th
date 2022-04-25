#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score_1,score_2,score_3,sum_score;
    int i=0;
    do{
        scanf("%d%d%d",&score_1,&score_2,&score_3);
        if((0<=score_1&&score_1<=30)&&(0<=score_2&&score_2<=30)&&(0<=score_3&&score_3<=40)){
            i=0;
        }
        else{
            i=1;
        }

    }
    while(i!=0);
    sum_score = score_1+score_2+score_3;
    if(sum_score<50)
        printf("F");
    else if(50<=sum_score&&sum_score<=54)
        printf("D");
    else if(55<=sum_score&&sum_score<=59)
        printf("D+");
    else if(60<=sum_score&&sum_score<=64)
        printf("C");
    else if(65<=sum_score&&sum_score<=69)
        printf("C+");
    else if(70<=sum_score&&sum_score<=74)
        printf("B");
    else if(75<=sum_score&&sum_score<=79)
        printf("B+");
    else
        printf("A");
    return 0;
}
