/* Enter your solutions in this file */
#include <stdio.h>

int max(int arr[], int n){
	int max_val = 0;
	for(int i=0;i<n;i++){
		if(max_val < arr[i]){
			max_val = arr[i];
		}
	}
	return max_val;
}

int min(int arr[], int n){
	int min_val = arr[0];
	for(int i=0;i<n;i++){
		if(min_val > arr[i])
			min_val = arr[i];
	}
	return min_val;
}

float average(int arr[], int n){
	float avg = 0;
	for(int i=0;i<n;i++){
		avg+=arr[i];
	}
	avg/=n;
	return avg;
}

int mode(int arr[], int n){
	int mod = 0;
	int freq = 0;
	for(int i=0;i<n;i++){
		int count = 0;
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count > freq){
			freq = count;
			mod = arr[i];
		}
	}
	return mod;
} 

int factors(int n, int arr[]){
	int k = 0;
	for(int i=2;i<=n;++i){
		while(n%i==0){
			arr[k] = i;
			k++;
			n=n/i;
		}
	}
	return k;
}
		
	
