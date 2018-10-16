#include "list.h"
#include <stdio.h>
#include <stdlib.h>



int main(){

	struct node * test;
	test = insert_front(test,1);
	test = insert_front(test,5);
	test = insert_front(test,9);
	test = insert_front(test,10);
	printf("Printing 10-9-5-1 in order by inserting by front \n");
	print_list(test);
	test = free_list(test);
	printf("Printing freed list \n");
	print_list(test);
	return 0;
}
