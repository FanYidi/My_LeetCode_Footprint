#include<stdio.h>
#include<iostream>

using namespace std;

typedef struct ListNode {
    int data;
    ListNode *next;
}ListNode, *LinkList;

ListNode *Reverse_List(LinkList head) {
    ListNode *r, *p = head;
    head = NULL;
    while(p != NULL){
        r = p->next;
        p->next = head;
        head = p;
        p = r;
    }
    return head;
}
//代码至此已完成了对Leetcode的Accept要求，以下是输入输出补充

ListNode *Reverse_List_with_HeadNode(LinkList head) {
    ListNode *r, *p = head->next;
    head->next = NULL;
    while(p != NULL){
        r = p->next;
        p->next = head->next;
        head->next = p;
        p = r;
    }
    return head;
}

LinkList List_TailInsert(LinkList &head){
    int x;
    head = (LinkList)malloc(sizeof(ListNode));
    ListNode *s, *r = head;
    scanf("%d", &x);
    while(x != 9999){
        s = (ListNode*)malloc(sizeof(ListNode));
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d", &x);
    }
    r->next=NULL;
    return head;
}

void *L_Print(LinkList head){
    ListNode *p = head->next;
    while(p != NULL){
        printf("%d\n",p->data);
        p = p->next;
    }
}

int main(){
    ListNode *head;
    head = (ListNode*)malloc(sizeof(ListNode));
    List_TailInsert(head);
    Reverse_List_with_HeadNode(head);
    L_Print(head);
    return 0;
}
