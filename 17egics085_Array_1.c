#include<stdio.h>
#include<stdlib.h>

void frequency(int arr[], int n){
	
	int i,j,count,a=0,temp;
	
	for(i=0;i<n;i++){
		count=1;
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		
		if(a<count){
			a=count;
			temp=arr[i];
		}
	}
	printf("%d",temp);
}

void main(){
	
	int*arr;
	int i,n;

	scanf("%d",&n);
	
	arr = (int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	frequency(arr, n);
}


