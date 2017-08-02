#include <iostream>
#include <stdio.h>  
#include <stdlib.h>  
using namespace std;
  
#define ElementType int //�洢����Ԫ�ص�����  
#define MAXSIZE 2048 //�洢����Ԫ�ص�������  
#define ERROR -99 //ElementType������ֵ����־����  

//��ջ��˳��洢�ṹͨ����һ��һά�����һ����¼ջ��Ԫ��λ�õı������  
typedef struct {  
    ElementType data[MAXSIZE];  
    int top;  
}Stack;  
  
//��ʼ��ջ  
Stack* InitStack() {  
    Stack* stack;  
    stack = (Stack*)malloc(sizeof(Stack));  
    if (!stack) {  
        printf("�ռ䲻��\n");  
        return NULL;  
    }  
    stack->top = -1;  
    return stack;  
}  
  
int IsFull(Stack* stack) {  
    if (stack->top == MAXSIZE - 1) {  
        printf("��ջ����\n");  
        return 1;  
    }  
    return 0;  
}  
  
int IsEmpty(Stack* stack) {  
    if (stack->top == -1) {  
        printf("��ջ��\n");  
        return 1;  
    }  
    return 0;  
}  
  
//��ջ  
void Push(Stack* stack, ElementType item) {  
    if (IsFull(stack)) {  
        return;  
    }  
    stack->data[++stack->top] = item;  
}  
  
//��ջ  
ElementType Pop(Stack* stack) {  
    if (IsEmpty(stack)) {  
        return ERROR;  
    }  
    return stack->data[stack->top--];  
}  
  
void PrintStack(Stack* stack) {  
    printf("��ǰջ�е�Ԫ��:\n");  
    int i;  
    for (i = stack->top; i >= 0; i--) {  
        printf("%d\n", stack->data[i]);  
    }  
}  

int main(){
	Stack* stack = InitStack();//���ɲֿ� 
      
	double first = 0, other=0;

	double n=0;
	do{
		cin>>n;

		if(first==0){
			first = n;
		}
		else{
			other = n;
		}

		if(
			(first>0 && other>0) || 
			(first<0 && other<0)
		){
			Push(stack, other);  //����ֿ� 
		}
	}while(n!=0);

    PrintStack(stack);  	//��ӡ�ֿ� 
	
	return 0;
} 
