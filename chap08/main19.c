#include<stdio.h>

//fread fwrite

int main19() {

    FILE* afd;
    FILE* bfd;
    int age = 10;
    char name[20] = "ȫ�浿\0";
    int res;
    char resname[20];

    afd = fopen("c.txt", "wb");
    if (afd != NULL) {
        fwrite(&age, sizeof(int), 1, afd);
        fwrite(name, sizeof(char), strlen(name), afd);
        fclose(afd);
        printf("���Ͼ��Ⱑ �Ϸ�Ǿ����ϴ�\n");
    }
    bfd = fopen("c.txt", "rb");
    if (bfd != NULL) {
        fread(&res, sizeof(res), 1, bfd);
        fread(resname, sizeof(char), strlen(name), bfd);

        printf("%d %s\n", res, name);
    }

    return 0;
}
