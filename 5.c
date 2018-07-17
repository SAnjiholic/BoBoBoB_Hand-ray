#include <stdio.h>
#include <stdlib.h>

struct list1 {
	int data;
	struct list1 *next;
};

struct list2 {
	struct list1 *prev;
	struct list1 *tail;
};

void list_init(struct list2 *list_1){
	list_1->tail = NULL;
	list_1->prev = list_1->tail;
}

void list_add_to_tail(struct list2 *list_2, int a){
	
	if(list_2->prev == NULL){
		list_2->tail = malloc(16);
		list_2->tail->data = a;
		list_2->tail->next = NULL;
		list_2->prev = list_2->tail;
	}
	else{
		list_2->tail->next = malloc(16);
		list_2->tail->next->data = a;
		list_2->tail->next->next = NULL;
		list_2->tail = list_2->tail->next;	
	}
}

void list_printall(struct list2 *list_3){
	struct list1 *plist = list_3->prev;

	while(plist!=NULL){
		printf("%d\n",plist->data);
		plist = plist->next;
	}
}

int main(){
	struct list2 list_do;
	list_init(&list_do);
	list_add_to_tail(&list_do,1);
	list_add_to_tail(&list_do,2);
	list_add_to_tail(&list_do,3);
	list_printall(&list_do);
	return 0;
}


