//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////�ڱ� ���� ����ü
//
//typedef struct node {
//	struct node* next;
//	int data;
//	//���� �߰��� ����Ÿ�� ����ü�� ����� �߰��ϱ�
//	//code here
//}Node;
//
//void appendFirst(Node* list, int newData) {
//	Node* newNode = malloc(sizeof(Node));
//	newNode->next = list->next;
//	newNode->data = newData;
//	list->next = newNode;
//}
//
//void append(Node* list, int newData) {
//	Node* cur = list;
//
//}
//
//
//int searchList(Node* list, int data) {
//	Node* cur = list;
//	int pos = 0;
//	while (cur != NULL) {
//		//�����͸� ã����
//		if (cur->data == data) {
//			return pos;
//		}
//		cur = cur->next;
//		pos++;
//	}
//	pirntf("�����͸� ã�� ���߽��ϴ�\n0�� �����մϴ�\n")
//	return pos;
//}
//
//
//void insert(Node* list, int pos, int newData) {
//	Node* cur = list;
//	//cr
//}
//void showList(Node* list) {
//	Node* cur = list->next;
//	while (cur != NULL) {
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//	printf("\n");
//}
//
//void deleteList(Node* list) {
//	Node* cur = list;
//	Node* next;
//	while (cur != NULL) {
//		next = cur->next;
//		free(cur);
//		cur = next;
//	}
//}
//
//
//int main() {
//	//�߰��� ��� ����
//	int count = 0;
//	printf("���ʿ� �߰��ϱ�\n");
//	Node* list2 = malloc(sizeof(Node));
//	list2->next = NULL;
//	count = 10;
//	for (int i = 1; i <= count; i++) {
//		append(list2, i);
//	}
//	showList(list2);
//
//	deleteList(list2);
//
//	printf("head �����\n");
//	Node* list1 = malloc(sizeof(Node));
//	list1->next = NULL;
//
//	count = 10;
//	printf("���ʿ� �߰��ϱ�\n");
//	for (int i = 1; i <= count; i++) {
//		appendFirst(list1, i);
//	}
//	showList(list1);
//
//	deleteList(list1);
//
//
//	return 0;
//}