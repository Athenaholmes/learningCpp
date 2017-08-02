#include <iostream>
#include <stdio.h>  
#include <stdlib.h>  
using namespace std;
  
#define ElementType int //存储数据元素的类型  
#define MAXSIZE 2048 //存储数据元素的最大个数  
#define ERROR -99 //ElementType的特殊值，标志错误  

//堆栈的顺序存储结构通常由一个一维数组和一个记录栈顶元素位置的变量组成  
typedef struct {  
    ElementType data[MAXSIZE];  
    int top;  
}Stack;  
  
//初始化栈  
Stack* InitStack() {  
    Stack* stack;  
    stack = (Stack*)malloc(sizeof(Stack));  
    if (!stack) {  
        printf("空间不足\n");  
        return NULL;  
    }  
    stack->top = -1;  
    return stack;  
}  
  
int IsFull(Stack* stack) {  
    if (stack->top == MAXSIZE - 1) {  
        printf("堆栈已满\n");  
        return 1;  
    }  
    return 0;  
}  
  
int IsEmpty(Stack* stack) {  
    if (stack->top == -1) {  
        printf("堆栈空\n");  
        return 1;  
    }  
    return 0;  
}  
  
//入栈  
void Push(Stack* stack, ElementType item) {  
    if (IsFull(stack)) {  
        return;  
    }  
    stack->data[++stack->top] = item;  
}  
  
//出栈  
ElementType Pop(Stack* stack) {  
    if (IsEmpty(stack)) {  
        return ERROR;  
    }  
    return stack->data[stack->top--];  
}  
  
void PrintStack(Stack* stack) {  
    printf("当前栈中的元素:\n");  
    int i;  
    for (i = stack->top; i >= 0; i--) {  
        printf("%d\n", stack->data[i]);  
    }  
}  

int main(){
	Stack* stack = InitStack();//生成仓库 
      
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
			Push(stack, other);  //放入仓库 
		}
	}while(n!=0);

    PrintStack(stack);  	//打印仓库 
	
	return 0;
} 
