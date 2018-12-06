#include <stdio.h>
#include <stdlib.h>

typedef struct linknd {
	int data;
	
	void *next; // *next 가리키는 대상은 구조체이다. 
	//struct linked *next
}linknd_t;


static linknd_t *list; //linked list의 실체, static -> 다른 사람이 내가  코딩한거 못 건들이게 하려고

linknd_t* create_node(int value){
	linknd_t* ndPtr;
	
	ndPtr = (linknd_t*)malloc( sizeof(linknd_t) ); //구조체의 크기만큼 메모리 수가 할당된다.  
	//->linked_t*은 구조체를 가리키는 것이다라고 명시해주는 것 
	
	if(ndPtr == NULL)
	{
		printf("ERROR\n");
		 return NULL; 
	}
	
	ndPtr ->data = value;
	ndPtr ->next = NULL;
	 
	return ndPtr; 
} 

void addTail(int value) //링크드 리스트에 추가할 내용을 받는다.
{
	linknd_t* ndPtr, *newPtr;
	if (list == NULL) //첫 node이면 list가 생성한 node를 가리키도록 함;
	{
		return;
	}
	
	else //이전에 node를 만든적이 있으면
	{
		ndPtr = list;
		while(ndPtr->next != NULL)
		{
			ndPtr = ndPtr->next;
		}
		
		newPtr = create_node(value);
		ndPtr->next = newPtr;
	}
	
 } 














