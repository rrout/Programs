#include <stdio.h>
#include <stdlib.h>
#include "slist.h"

slist_t * insertSlistNode(slist_t *root, int data)
{
	slist_t *p = NULL, *q = NULL;
	slist_t *newnode = NULL;
	
	CREATE_SLIST_NODE(newnode, data);
	if(!newnode)
		return root;
	if (!root)
		return newnode;
	if (data < root->data)
	{
		newnode->next = root;
		return newnode;
	}
	p = q = root;
	while (p)
	{
		if (data <= p->data)
		{
			q->next = newnode;
			newnode->next = p;
			return root;
		}
		q = p;
		p = p->next;
	}
	q->next = newnode;
	return root;
}

slist_t * removeSlistNode(slist_t *root, int data)
{
	slist_t *p = NULL, *q = NULL;
	if (root == NULL)
		return root;
	if (root->data == data)
	{
		p  = root;
		root = root->next;
		free(p);
		return root;
	}
	p = q = root;
	while (p)
	{
		if (data == p->data)
		{
			q->next = p->next;
			free (p);
			return root;
		}
		q = p;
		p = p->next;
	}
	printf ("Data %d is not found in slist\n", data);
	return root;
}

slist_t * findSlistNode(slist_t *root, int data)
{
	slist_t *p = NULL, *q = NULL;
	if (root == NULL)
		return root;
	
	p = q = root;
	while (p)
	{
		if (data == p->data)
			return p;
		p = p->next;
	}
	return NULL;
}

void printSlist(slist_t *root)
{
	slist_t *p = NULL, *q = NULL;
	p = q = root;
	printf("List :");
	while (p)
	{
		printf("%d\t", p->data);
		p = p->next;
	}
	printf("\n");
}

void printSlistREC(slist_t *root)
{
	if (root == NULL)
	{
		printf("\n");
		return;
	}
	printf("%d\t", root->data);
	printSlistREC(root->next);
}


slist_t * reverseSlist(slist_t *root)
{
	slist_t *p = NULL, *q = NULL, *r = NULL;
	p = root;
	if (root == NULL)
		return root;
	while (p)
	{
		q = p->next;
		p->next = r;
		r = p;
		p = q;
	}
	return r;
}

slist_t * reverseSlistREC(slist_t *root)
{
	slist_t *p = NULL;
	if (root == NULL || root->next == NULL)
		return root;

	p = reverseSlistREC(root->next);
	root->next->next = root;
	root->next = NULL;
	
	return p;
}

slist_t * reverseNNodesSlist(slist_t *root, int n)
{
	slist_t *p = NULL, *q = NULL, *r = NULL;
	int count = 0;
	p = root;
	
	while ( p && count != n)
	{
		q = p->next;
		p->next = r;
		r = p;
		p = q;
		count ++;
	}
	
	if (p)
	{
		root->next = reverseNNodesSlist(p, n);
	}
	
	return r;
}


slist_t * mergeSlists(slist_t *list1, slist_t *list2)
{

}

slist_t * findRemoveDupsInSlist(slist_t *root)
{

}


slist_t * findLoopInSlist(slist_t *root)
{

}

slist_t * findNthElemFromSlistTail(slist_t *root, int n)
{
	slist_t *p = root, *q = NULL;
	int count = 0;
	p = q = root;
	while(p && count < n)
	{
		p = p->next;
	}
	if (!p)
		return NULL;
	while(p)
	{
		q = q->next;
		p = p->next;
	}
	return q;
}


slist_t * deleteSlist(slist_t *root)
{
	slist_t *p = root, *q = NULL;
	while (p)
	{
		q = p;
		p = p->next;
		free (q);
		q = NULL;
	}
	return NULL;
}

slist_t * deleteSlistREC(slist_t *root)
{
	slist_t *p = NULL;
	if (!root)
		return root;
	p = deleteSlistREC(root->next);
	
	return p;
}

int numNodesInSlist(slist_t *root)
{
	slist_t *p = root, *q = NULL;
	int count = 0;
	if(root == NULL)
		return 0;
	while (p)
	{
		count++;
		p = p->next;
	}
	return count;
}

int numNodesInSlistREC(slist_t *root)
{
	int count = 0;
	if (!root)
		return 0;
	count += numNodesInSlistREC(root->next);
	
	return count + 1;
}
		
slist_t * getSlistMiddle(slist_t *root)
{
	slist_t *p = root, *q = NULL;
	int count = 0;
	p = q = root;
	while (p)
	{
		count++;

		if (count % 2 == 1)
			q = q->next;

		p = p->next;
	}
	return q;
}

slist_t * mergeSlistsAlternate(slist_t *list1, slist_t *list2)
{
}
