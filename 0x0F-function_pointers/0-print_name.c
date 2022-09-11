#!/bin/bash
#include <stdio.h>
#include <string.h>
#include "header.h"

void print_name(char *name, void (*f)(char *));
void print_name_as_is(char *name);


int main(void){
	    void (*f)(char*) = &print_name_as_is;
	        print_name("leo",f);
		    return 0;
}

void print_name_as_is(char *name){
	    printf("Hello, my name is %s\n", name);
}



void print_name(char *name, void (*f)(char *)){
	    f = &print_name_as_is;
	        (*f)(name);
}

