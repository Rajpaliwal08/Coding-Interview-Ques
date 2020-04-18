#include<stdio.h>
void main(){
	
    int *arr;
    int i,j,n,temp;
	
	scanf("%d",&n);
	
	arr = (int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		scanf("%1d",&arr[i]);
	}
	for(i=0;i<n;i++){
		temp=1;
		for(j=0;j<n;j++){
			if(arr[i]!=arr[j]){
				temp++;
			}
		}
		if(temp==n){
			printf("%d",arr[i]);
		}
	}
}
