#define _CRT_SECURE_NO_WARNINGS 1
void DeleteNode(SListNode*& head, SlistNode* pos)
{
	if (head == NULL || pos == NULL)
	{
		return;
	}
	//一个节点（头结点）
	if (pos == *head)
	{
		delete head;
		head = NULL;
	}
	else if (pos->_next != NULL)
	{
		SListNode* next = pos->_next;
		delete next;
		next = NULL;
	}
	else
	{
		SListNode* cur = head;
		SListNode* prev = NULL;
		while (cur != pos)
		{		
			cur = cur->_next;
		}
		cur->_next = NULL;
		delete pos;
		pos = NULL;
	}
}