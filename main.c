#include "list.h"
#include <stdio.h>
#include <stdlib.h>



int main(){

	struct node * test;
	test = insert_front(test,1);
	test = insert_front(test,5);
	test = insert_front(test,9);
	test = insert_front(test,10);
	print_list(test);
	test = free_list(test);
	print_list(test);
	return 0;
}
