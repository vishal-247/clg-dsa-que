// Online C compiler to run C program online
#include <stdio.h>
#define N 5
    int top=-1;
    int stack[N];
 
void push(){
    int value;
    printf("\n enter the value to push into the stack ");
    scanf("%d",&value);
    if (top>=N-1){
        printf("stack overflow ");
       
    }else{
        //  printf("value of top before push %d ",top);
        top++;
        stack[top]=value;
    }
    
}

void pop(){
    if (top==-1){
        printf("stack is empty ");
    }else{
        // stack[top]=0;
        top--;
        printf("\nthe top element is deleted and stack is being initiallised with value 0\n");
    }
}
void top_index(){
    printf("%d is the current top value",top);
}
void peek(){
    printf("%d",stack[top]);
}
void display(){
    for(int i=top;i>=0;i--){
        printf("\n %d and value %d ",i,stack[i]);
    }
}

void print(){
    printf("vale of top %d and value present at top index %d",top,stack[top]);
}
int main() {
    int ch;

do{
    printf("\n chose the operation to perform 1->push(),2->pop(),3->peek(),4d->display() 5->top_index() and 0 for exit :");
    scanf("%d",&ch);
switch(ch){
    // case 0:break;
    case 1:{
        push();
    }break;
    case 2:{
        pop();
    }break;
    case 3:{
        peek();
    }break;
    case 4:{
        display();
    }break;
     case 5:{
        top_index();
    }break;
    
default:{printf("invalid input ");
    continue;
}
}    
}while(ch!=0);
    // push();
    // print();
    //   pop();
    // print();
    // display();
//   printf("%d",stack[]);
    return 0;
}