#include<stdio.h>
#define digits 18

long long power(int val){
	long long num = 1;
	for(int i = 0; i < val; i++){
		num*=10;
	}
	return num;
}

int main(){
	unsigned long long num = 6283185307179586476;
//	num = 3141592653589783238;
	for(int j = 0; j < digits; j++){
		int n = 0;
		n = num/power(digits-j);
		num -= n*power(digits-j);
		num = power(digits-j)/(double)num*power(digits-j-1);
		printf("%d\n", n);
	}
}
