#include <stdio.h>
#include <stdlib.h>

typedef struct linknd {
	int data;
	
	void *next; // *next ����Ű�� ����� ����ü�̴�. 
	//struct linked *next
}linknd_t;


static linknd_t *list; //linked list�� ��ü, static -> �ٸ� ����� ����  �ڵ��Ѱ� �� �ǵ��̰� �Ϸ���

linknd_t* create_node(int value){
	linknd_t* ndPtr;
	
	//���� �޸� �Ҵ�
	ndPtr = (linknd_t*)malloc( sizeof(linknd_t) ); //����ü�� ũ�⸸ŭ �޸� ���� �Ҵ�ȴ�.  
	//->linked_t*�� ����ü�� ����Ű�� ���̴ٶ�� ������ִ� ��  
	//���� �� ����
	
	if(ndPtr == NULL)
	{
		printf("ERROR\n");
		 return NULL; 
	}
	
	ndPtr ->data = value;
	ndPtr ->next = NULL;
	 
	return ndPtr; 
} 









