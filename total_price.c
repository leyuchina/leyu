/***************************************************************************
 * 
 * Copyright (c) 2016 koudai.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
#include<stdio.h>
#include<stdarg.h>
enum drink{
	MUDSLIDE,FUZZY_NAVEL,MONKEY_GLAND,ZOMBIE
};

double price(enum drink d){
	switch(d){
		case MUDSLIDE:
			return 6.79;
		case FUZZY_NAVEL:
			return 5.31;
		case MONKEY_GLAND:
			return 4.82;
		case ZOMBIE:
			return 5.89;
	}
	return 0;
}

double total(int args,...){
	double total = 0;
	va_list ap;
	va_start(ap,args);
	int i;
	for(i = 0; i < args; i++){
		total += price(va_arg(ap,double));
	}
	va_end(ap);
	return total;
}

int main(){
	double  money = 0;
	money = total(4,FUZZY_NAVEL,MUDSLIDE,ZOMBIE,FUZZY_NAVEL);
	printf("total money is $%.2f \n",money);
	return 0;
}


















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
