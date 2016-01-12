/***************************************************************************
 * 
 * Copyright (c) 2016 koudai.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
#include<stdio.h> 

enum response_type {DUMP,SECOND_CHANCE,MARRIAGE};
typedef struct {
	char *name;
	enum response_type type;
}response;

void dump(response r){
	printf("Dear %s, \n",r.name);
	puts("Unfortunately your last date contacted us to");
	puts("say that they will not be seeing you again");
}
void second_chance(response r){
	printf("Dear %s, \n",r.name);
	puts("Good news: your last date has asked us to");
	puts("arrange another meeting. Please call ASAP.");
}
void marriage(response r){
	printf("Dear %s, \n",r.name);
	puts("Congratulations! Your last date contacted us");
	puts("with a propasal of marriage");
}

void (*replies[])(response) = {dump, second_chance, marriage};

int main(){
	response r[]={
		{"Mike",DUMP},
		{"Luis",SECOND_CHANCE},
		{"Matt",SECOND_CHANCE},
		{"William",MARRIAGE}
	};
	int i;
	for(i = 0; i < 4; i++){
//		switch(r[i].type){
//			case DUMP:
//				dump(r[i]);
//				break;
//			case SECOND_CHANCE:
//				second_chance(r[i]);
//				break;
//			default:
//				marriage(r[i]);
//				break;
//		}
		(replies[r[i].type])(r[i]);		
	}
	return 0;
}















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
