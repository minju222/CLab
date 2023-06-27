//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////자기 참조 구조체
//
//typedef struct node {
//	struct node* next;
//	int data;
//	//이후 추가할 데이타를 구조체로 만들어 추가하기
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
//		//데이터를 찾으면
//		if (cur->data == data) {
//			return pos;
//		}
//		cur = cur->next;
//		pos++;
//	}
//	pirntf("데이터를 찾지 못했습니다\n0을 리턴합니다\n")
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
//	//추가된 노드 갯수
//	int count = 0;
//	printf("뒤쪽에 추가하기\n");
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
//	printf("head 만들기\n");
//	Node* list1 = malloc(sizeof(Node));
//	list1->next = NULL;
//
//	count = 10;
//	printf("앞쪽에 추가하기\n");
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