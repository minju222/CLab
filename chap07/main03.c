//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////����ü �迭
//
//typedef struct {
//	char name[20];
//	int age;
//}Person;
//
//int main() {
//	Person ps[10] = {{"�Ѹ�", 7},{"�����", 8},{"��ġ", 9}}; //10�� �߿� ����ü 3���� �ʱ�ȭ��
//	printf("%d\n", sizeof(ps));//240((int 4byte+ char 20byte))*10)
//
//	for (int i = 0; i < 3; i++) {
//		printf("%s %d\n", ps[i].name, ps[i].age);
//	}
//	
//	//����� �Է�
//	int count = 0;
//	printf("�Է��Ͻ� ������ �Է��ϼ���\n");
//	scanf("%d", &count);
//
//	for (int i = 0; i < count; i++) {
//		printf("�̸��� �Է��ϼ���\n");
//		scanf("%s", ps[i].name);//name�� �迭�̶� �̸��� �ּҶ� & �ʿ� ����
//		printf("���̸� �Է��ϼ���\n");
//		scanf("%d", &ps[i].age);//int���̶� �ּҷ� �޾ƾ��ؼ� & �ʿ���
//	}
//
//	for (int i = 0; i < count; i++) {
//		printf("%s %d\n", ps[i].name, ps[i].age);
//	}
//
//
//}