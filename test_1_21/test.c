#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//��ϰ��
//1.����n�Ľ׳�
//int main()
//{
//int i = 0;
//int n = 0;
//int ret = 1;
//scanf("%d", &n);
//for (i = 1; i <= n; i++)
//{
//	ret = ret * i;
//}
//printf("ret=%d\n", ret);
//return 0;
//}


//2.����1!=2!=3!+....+10!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		//n�Ľ׳�
//		sum = sum + ret;
//	}
//
//	printf("ret=%d\n", sum);
//	return 0;
//}

//�Ż���
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		//n�Ľ׳�
//		sum = sum + ret;
//	}
//
//	printf("ret=%d\n", sum);
//	return 0;
//}


//3.��һ�����������в��Ҿ����ĳ������n����дint binsearch(int x,int v[],int n);���ܣ�
//  ��v[0]<=v[1]<=v[2]<=....<=v[n-1]�������в���x
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//дһ�����룬��arr���飨����ģ����ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}

//����һ˫Ь��500
//1,2,3,4....500
//250,375...
//so
//��Ч�ķ�����
//��������㷨�����ֲ����㷨��

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k);
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	
//		return 0;
//}


//4.��д���룬��ʾ����ַ��������ƶ������м�㱨��
//Ч����
//##############
//W############!
//WE##########!!
//...
//welcome to bit����������
//
//char arr[] = "abc";
//[a b c \0]
// 0 1 2 3
//4-2
//int main()
//{
//	char arr1[] = "welcome to bit����������";
//	char arr2[] = "##################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������-cls - �����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//5.��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɹ�
//����������������������˳�����
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//			if (strcmp(password,"123456") ==0)//== ���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯�� -strcmp
//			{
//				printf("��¼�ɹ�\n");
//					break;
//			}
//			else
//			{
//				printf("�������\n");
//			}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//	return 0;
//
//}



////do...while����ѭ��
////1~10
//int main()
//{
//int i = 1;
//do
//{
//	if (i == 5)
//		//break;//1234
//		continue;//1234��ѭ��
//	printf("%d ", i);
//	i++;
//} 
//while (i <= 10);
//
//return 0;
//
//}



//forѭ����
//һ��������
//����Ҫѭ�����ٴΣ�
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;//��0�Σ����ɣ�
//	//��0����k��kΪ�٣�ѭ������
//}


//һЩforѭ���ı���
//������:��������
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;//��ӡ��������hehe
//}


//����һ
//2.������Ƿǳ������������Ҳ�Ҫ����ʡ��
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (; i < 10; i++)
//	{
//		
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	//10 * 10 == 100
//	//10
//	//ȥ�����������������
//	return 0;
//}


//2.int main()
//{
//	for (;;)//ע�⣺1.forѭ���ĵĳ�ʼ��,�������ж϶�����ʡ�ԣ����ǣ�
//		//forѭ�����жϲ��������ʡ�ԣ����ж��������Ǻ�Ϊ��
//		
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//����ע��㣺
//1.int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//10 ��ѭ��
//	//10 �δ�ӡ
//	//10 ��Ԫ��
//	for (i = 0; i < 10; i++)//����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д��
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//�൱��i���ĳ�5
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	//ע�⣺������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ���ơ�
//	return 0;
//}


////����Ļ�ϴ�ӡ1~10
//int main()
//{
//	int i = 0;
//	//��ʼ��  �ж�  ����
//	for(i=1;i<=10;i++)
//	{
//		if (i == 5)
//			//break;//��ͬ��while���break
//			continue;// ��ͬ��while���ǻ�ص��������ּ���ִ��
//		printf("%d", i);
//	}
//	return 0;
//}



////whileѭ����ȱ�ݣ�
////�������ַ�ɢ����������ʧ��
//int main()
//{
//	int i = 0;//��ʼ��
//	while (i < 10);//�ж�
//	{
//		//....
//		i++;//����
//	}
//	return 0;
//}


//���䣺whileѭ����putchar��getchar�÷�
//ʵ��2��
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')//���ߵ���˼
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//ʵ��1��
//int main()
//{
//	int ch = 0;
//	//EOF - end of file �ļ�������־
//	/*while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//
//	//ʵ�ʼ�ֵ��
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);//�������룬�������password������
//	//��������ʣ��һ��'\n'
//	//��ȡһ��'\n'
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N):>");
//	ret = getchar();//Y/N
//	//   \n��ASCIIֵΪ10,������س�ʱ������\n,��ret����
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}



