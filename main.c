/*
 * main.c
 *
 *  Created on: 12 февр. 2020 г.
 *      Author: liebe
 */
#include <stdio.h>

void pow2(int num);
void pow2array(int arr[]);


int main(){
	int num = 10;
	printf("Value in main befor pow2 %d\n", num);
	pow2(num);
	printf("Value in main befor pow2 %d\n", num);
	printf("\n");
	int arr[] = {10,20};
	printf("Num in array bevor pow2array %d\n", arr[0]);
	pow2array(arr);
	printf("Num in array after pow2array %d\n", arr[0]);



	return 0;

}

void pow2(int num){
	num = num*num;
	printf("Value in pow2 %d\n", num);
}

void pow2array(int arr[]){
	arr[0] = arr[0]*arr[0];
	printf("Value in pow2array %d\n", arr[0]);

}
