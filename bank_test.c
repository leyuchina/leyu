/***************************************************************************
 * 
 * Copyright (c) 2016 koudai.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
#include<stdio.h>
typedef struct{
	const char *description;
	float value;
}swag;
typedef struct{
	swag *swag;
	const char *sequence;
}combination;
typedef struct{
	combination numbers;
	const char *make;
}safe;

int main(){
	swag gold={"GOLD",1000000.0};
	combination numbers = {&gold,"6539"};
	safe s = {numbers,"fas345"};

	printf("contents = %s\n",s.numbers.swag->description);
	return 1;
}





















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
