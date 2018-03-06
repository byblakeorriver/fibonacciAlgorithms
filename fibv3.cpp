#include "Fibv3.h"

#include "stdio.h"
#include "stdlib.h"

long long fibv3(int n){
	long long *p = (long long *) malloc(sizeof(long long));
	long long arr[n];

	if(n<1){
		printf("Bad Parameter");
		return -1;
	}
	if(n==1||n==2){
		return 1;
	}
	for(int i = 0; i<n; i++){
		if(i==0||i==1){
			arr[i]=1;
		}
		else{
			p=&arr[i];
			*p=arr[i-1]+arr[i-2];
		}
	}
	return *p;
}
