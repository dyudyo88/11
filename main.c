#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main()
{
	genList();
	
	addTail(10);
	addTail(20);
	addTail(30);
	addTail(40);
	addTail(50);
	
	print_list(3);
		
	return 0;
}
