#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef int SLTDataType;

typedef struct SListNode {
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

SLTNode* BuySLTNode(SLTDataType x);
SLTNode* CreateSList(int n);
void SLTPrint(SLTNode* phead);

void SLTPushBack(SLTNode** pphead, SLTDataType x);
void SLTPopBack(SLTNode** pphead);
void SLTPushFront(SLTNode** pphead, SLTDataType x);
void SLTPopFront(SLTNode** pphead);

SLTNode* SListFind(SLTNode* phead, SLTDataType x);

//单链表在pos位置之后插入x
void SListInsertAfter(SLTNode* pos, SLTDataType x);
//单链表删除pos位置之后的值
void SListEraseAfter(SLTNode* pos);

//在pos之前插入
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//删除pos位置
void SListErase(SLTNode** pphead, SLTNode* pos, SLTDataType x);

void SLTDestroy(SLTNode** pphead);