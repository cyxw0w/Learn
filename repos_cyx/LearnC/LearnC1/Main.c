#include<stdio.h>	//���

#include<Windows.h>		//������ ���.

enum eTrabe {
	�߼�	=0,
	�𵥵�,
	�Ǹ�,
};
enum eType {
	�� = 0,
	��,
	â,
	������
};

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

	/*
	char szStr[100] = { 0, };
	int number;
	printf("�̸��� ���̸� �Է��ϼ���(�̸� ����) : ");
	scanf_s("%s %d", szStr, sizeof(szStr), &number);
	printf("����� �̸��� [%s]�� �Դϴ�. \n���̴� %d�� �Դϴ�.", szStr, number);
	*/
	/*
	��������
	int year;
	printf("�¾ �⵵�� �Է��ϼ��� : ");
	scanf_s("%d", &year);
	printf("����� ���̴� %d���Դϴ�.\n", 2020 - year + 1);
	*/
	/*printf("int\t:%d\n", sizeof(int));
	printf("short\t:%d\n", sizeof(short));
	printf("long\t:%d\n", sizeof(long));
	printf("long long \t:%d\n", sizeof(long long));
	printf("unsigned int\t:%d\n", sizeof(unsigned int));*/

	/*int number = 0;
	unsigned int value = number;
	printf("number = %d, value = %d\n", number, value);
	value = number = -1;
	printf("number = %d, value = %u\n", number, value);*/

	//�⺻������ ���ǥ���� double�� �ν�
	/*float pi = 0.0f;
	printf("pi = %.2f\n", pi);
	pi = pi + 3.14f;
	printf("\"pi = %1.2f\"\n", pi);*/
	/*
	char ch = 'Z';
	char str[] = "�ȳ��ϼ���.";
	char* str2 = "�ȳ��ϼ���2";
	printf("str = %s\n", str);
	printf("str2 = %s\n", str2);
	str2 = "�ݰ�����";
	printf("str2 = %s\n", str2);

	//printf("ch = %c\n", ch);
	//ch = 112;
	//printf("ch = %c\n", ch);
	*/

	//enum eTrabe monsterTrabe = �߼�;		//0: �߼�, 1:�𵥵�, 2: �Ǹ�
	//enum eType weaponType = ��;			//0: ��, 1: ��, 2: â, 3: ������.....

	//printf("monsterTrabe = %d\n", monsterTrabe);
	//printf("monsterTrabe = %d\n", monsterTrabe = �𵥵�);
	//printf("monsterTrabe = %d\n", monsterTrabe = �Ǹ�);

	//printf("weaponType = %d\n", weaponType);
	//printf("weaponType = %d\n", weaponType = ��);
	//printf("weaponType = %d\n", weaponType = â);
	//printf("weaponType = %d\n", weaponType = ������);

	//��������
	char name[100] = { 0, };
	float height =.0f;
	float weight =.0f;

	float bmi = .0f;
	printf("�̸��� �Է��ϼ��� :");
	scanf_s("%s", name, 100);

	printf("Ű�� �����Ը� �Է��ϼ���(###.# ##.#) :");
	scanf_s("%f, %f", &height, &weight);
	bmi = weight / ((height*0.01)*(height*0.01));
	printf("%s���� Ű�� %.1fCm�̰�, �����Դ� %.1fKg�Դϴ�.\n", name, height, weight);
	printf("%s���� �񸸵��� %.2f�Դϴ�.(25�̻��� ��)\n", name, bmi);
	
	system("pause");	//������ �ڵ�.
	return 0;
}