#include <stdio.h>
#include "list.h"
#include <stdlib.h>

/*
struct node{
  int i;
  struct node * next;
};
*/

/*
struct node * give(){
	struct node * n1;
	//struct node * n2;
	//n2 -> i = 6;
	//n1 -> i = 4;
	n1 -> next = 0;
	//n2 -> next = 0;
	return n1;
}
*/

void print_list(struct node * point){

	//printf("Number in node is %d\n", point -> i);
	while(point -> next != 0){
	//point = point -> next;
	printf("Number in node is %d\n", point -> i);
	point = point -> next;
	//printf("Number in node is %d\n", point -> i);

}
	if(point -> next == 0){
		printf("Number in node is %d\n", point -> i);
}

}

struct node * insert_front(struct node * pointy, int b){

	struct node * ne = malloc(sizeof(ne));
	ne -> i = b;
	ne -> next = pointy;
	return ne;
}

struct node * free_list(struct node * pointa){
	struct node * ans = pointa;
	struct node * ref = pointa;
	//struct node * ref2 = pointa;
	while(pointa -> next != 0){
		ref = pointa -> next;
		pointa -> next = 0;
		free(pointa);
		pointa = ref;
		}

	if(pointa -> next == 0){
	free(pointa);
	}
	return ans;
}		



/*
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
 */