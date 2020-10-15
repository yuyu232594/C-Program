//
// Created by 李闻瑜 on 2020/10/15.
//

#include "stdio.h"
#include "stdlib.h"

//头插法实现动态单链表

typedef struct node{
    int element;
    struct node *next;
}node,*linklist;

linklist insertFromHead(int num){
    linklist head=(linklist)malloc(sizeof(node));
    linklist temp=head;
    head->next=NULL;
    for(int i=0;i<num;i++){
        linklist n=(linklist)malloc(sizeof(node));
        printf("please input the %dth number",i);
        scanf("%d",&(n->element));
        temp->next=n;
        temp=temp->next;
    }
    return head;
}

void display(linklist head){
    linklist temp=head;
    while(temp->next){
        temp=temp->next;
        printf("%d\n",temp->element);
    }
}

int main(){
    linklist head=insertFromHead(10);
    display(head);
    return 0;
}