#include <stdio.h>
#include <stdlib.h>
#include "slist.h"


int main()
{
	slist_t *root = NULL;
	int arr[] = {100, 55,32,33, 35,75,86,6898,987,895,452,6543,764,8796,15,564,5436,768,432,543,4532,6547};
	int i, cnt = 0;
	for (i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
		root = insertSlistNode(root, arr[i]);
	printf ("Inserted\n");
	
	
	cnt = numNodesInSlistREC(root);
	printf ("Number of nodes : %d\n", cnt);
	printSlist(root);
	
	
	root = removeSlistNode(root, 6543);
	cnt = numNodesInSlistREC(root);
	printf ("Number of nodes : %d\n", cnt);
	printSlist(root);
	
	root = reverseSlist(root);
	cnt = numNodesInSlistREC(root);
	printf ("Number of nodes : %d\n", cnt);
	printSlist(root);
	
	return 1;
}










		