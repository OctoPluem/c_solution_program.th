#include<stdio.h>
#define MAX_SIZE 2000
int main(){
	int i,n,max,min;
	int arr[MAX_SIZE];
	scanf("%d",&n); 
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);	
	}
	max=arr[0];
	min=arr[0];
	for(i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	
	printf("%d\n",min);
	printf("%d",max);
	return 0;
}
