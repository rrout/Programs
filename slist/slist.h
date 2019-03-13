#include <stdio.h>
#include <stdlib.h>

#ifndef __SLIST__H__
#define __SLIST__H__

typedef struct _slist {
	int data;
	struct _slist *next;
}slist_t;

#define CREATE_SLIST_NODE(ptr, data)				\
	{                                               \
		ptr = (slist_t *) malloc(sizeof(slist_t));	\
		if (ptr) {									\
			ptr->data = data; ptr->next = NULL;		\
		} 											\
		else										\
			printf("Can't allocate memory\n"); 		\
	}
slist_t * insertSlistNode(slist_t *root, int data);
slist_t * removeSlistNode(slist_t *root, int data);
slist_t * findSlistNode(slist_t *root, int data);

void printSlist(slist_t *root);
void printSlistREC(slist_t *root);

slist_t * reverseSlist(slist_t *root);
slist_t * reverseSlistREC(slist_t *root);
slist_t * reverseNNodesSlist(slist_t *root, int n);

slist_t * mergeSlists(slist_t *list1, slist_t *list2);
slist_t * findRemoveDupsInSlist(slist_t *root);
int numNodesInSlistREC(slist_t *root);

slist_t * findLoopInSlist(slist_t *root);
slist_t * findNthElemFromSlistTail(slist_t *root, int n);

slist_t * deleteSlist(slist_t *root);
int numNodesInSlist(slist_t *root);
slist_t * getSlistMiddle(slist_t *root);
slist_t * mergeSlistsAlternate(slist_t *list1, slist_t *list2);

#endif //__SLIST__H__