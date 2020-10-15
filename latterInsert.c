//
// Created by 李闻瑜 on 2020/10/15.
//使用尾插法实现单链表

#include "stdio.h"
#include "stdlib.h"

typedef struct Point{
    int element;
    struct Point *next;
}node,*Linklist;

Linklist initLinklist(int num){
    Linklist head=(Linklist)malloc(sizeof(node));
    head->next=NULL;
    for(int i=num;i>0;--i){
        Linklist n=(Linklist)malloc(sizeof(node));
        printf("please input the %d number",i);
        scanf("%d",&(n->element));
        n->next=head->next;
        head->next=n;
    }
    return head;
}

void display(Linklist head){
    Linklist temp=head;
    while(temp->next){
        temp=temp->next;
        printf("%d\n",temp->element);
    }
}

int main(){
    Linklist head=initLinklist(10);
    display(head);
    return 0;
}