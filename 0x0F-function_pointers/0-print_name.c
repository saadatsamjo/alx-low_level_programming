void print_name(char *name, void (*f)(char *)){
	    f = &print_name_as_is;
	        (*f)(name);
}
