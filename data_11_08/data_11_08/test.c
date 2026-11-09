#include "SList.h"

void test01() {
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPushBack(&plist, 6);
	SLTPushBack(&plist, 7);
	SLTPrint(plist);


	SLTNode* p = SListFind(plist, 3);
	SListEraseAfter(p);
	SLTPrint(plist);

	SLTDestroy(&plist);
	SLTPrint(plist);
}



int main() {
	test01();

	return 0;

}