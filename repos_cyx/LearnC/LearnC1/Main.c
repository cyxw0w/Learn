#include<stdio.h>	//���

#include<Windows.h>		//������ ���.

int main(void) {//����� ���� ���� Ȯ��(��ɾ��)
	
				/*
	putchar(putchar(65)+1);		//���� ��� �� ���� ��ȯ
	putchar('Z');
	
	puts("Hello C!!");
	puts("�ȳ� C���");
	*/

	/*
	//printf�� ������ ����� �� �ִ�.(�Է¼���)
	printf("�� �̸��� %s�Դϴ�. \n���̴� %1.3f���Դϴ�.�� \n", "������",3.141592);
	*/

	/*
	//getchar�� ���ۿ��� �ѱ��ڸ� �Է�
	//���ۿ� ���ڰ� ���������� ������ �´�.	
	putchar(getchar());
	puts("---------------------");
	putchar(getchar());
	*/
	
	//printf("%d\n", getchar());
	/*
	char szStr[10] = { 0, };
	printf("char size = %u\n", sizeof(char));
	printf("szStr size = %u\n", sizeof(szStr));
	printf("���ڿ��� �Է��ϼ���(10�� �̳��� �Է�) : ");	
	gets_s(szStr, sizeof(szStr));
	printf("�Է� ���ڿ� : %s\n", szStr);
	*/
	/*
	char szStr[100] = { 0, };
	printf("���ڿ��� �Է��ϼ���(100�� �̳��� �Է�) : ");
	scanf_s("%s", szStr, sizeof(szStr));
	printf("�Է� ���ڿ� : %s\n", szStr);
	*/
	/*
	char szStr[100] = { 0, };
	int number;
	printf("������ ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &number);
	printf("�Է��Ͻ� ���� + 11�� [%d]�Դϴ�.\n", number+11);
	*/

	char szStr[100] = { 0, };
	int number;
	printf("�̸��� ���̸� �Է��ϼ���(�̸� ����) : ");
	scanf_s("%s %d", szStr, sizeof(szStr), &number);
	printf("����� �̸��� [%s]�� �Դϴ�. \n���̴� %d�� �Դϴ�.", szStr, number);




	system("pause");	//������ �ڵ�.
	return 0;
}