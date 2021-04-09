#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//练习：
//1.计算n的阶乘
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


//2.计算1!=2!=3!+....+10!
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
//		//n的阶乘
//		sum = sum + ret;
//	}
//
//	printf("ret=%d\n", sum);
//	return 0;
//}

//优化后：
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		//n的阶乘
//		sum = sum + ret;
//	}
//
//	printf("ret=%d\n", sum);
//	return 0;
//}


//3.在一个有序数组中查找具体的某个数字n。编写int binsearch(int x,int v[],int n);功能：
//  在v[0]<=v[1]<=v[2]<=....<=v[n-1]的数组中查找x
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//写一个代码，在arr数组（有序的）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}

//买了一双鞋：500
//1,2,3,4....500
//250,375...
//so
//高效的方法：
//折算查找算法（二分查找算法）

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	
//		return 0;
//}


//4.编写代码，演示多个字符从俩端移动，向中间汇报。
//效果：
//##############
//W############!
//WE##########!!
//...
//welcome to bit！！！！！
//
//char arr[] = "abc";
//[a b c \0]
// 0 1 2 3
//4-2
//int main()
//{
//	char arr1[] = "welcome to bit！！！！！";
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
//		//休息一秒
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数-cls - 清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//5.编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成功
//如果三次输入均输入错误，则退出程序。
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//			if (strcmp(password,"123456") ==0)//== 不能用来比较俩个字符串是否相等，应该使用一个库函数 -strcmp
//			{
//				printf("登录成功\n");
//					break;
//			}
//			else
//			{
//				printf("密码错误\n");
//			}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//	return 0;
//
//}



////do...while（）循环
////1~10
//int main()
//{
//int i = 1;
//do
//{
//	if (i == 5)
//		//break;//1234
//		continue;//1234死循环
//	printf("%d ", i);
//	i++;
//} 
//while (i <= 10);
//
//return 0;
//
//}



//for循环：
//一道笔试题
//请问要循环多少次？
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;//答案0次，理由：
//	//把0赋给k，k为假，循环结束
//}


//一些for循环的变种
//案例二:俩个变量
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;//打印出来俩个hehe
//}


//案例一
//2.如果不是非常熟练，建议大家不要随意省略
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
//	//去掉和留着是两个结果
//	return 0;
//}


//2.int main()
//{
//	for (;;)//注意：1.for循环的的初始化,调整，判断都可以省略，但是：
//		//for循环的判断部分如果被省略，那判断条件就是恒为真
//		
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//两个注意点：
//1.int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//10 次循环
//	//10 次打印
//	//10 个元素
//	for (i = 0; i < 10; i++)//建议for语句的循环控制变量的取值采用“前闭后开区间”写法
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
//		if (i = 5)//相当于i被改成5
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	//注意：不可在for循环体内修改循环变量，防止for循环失去控制。
//	return 0;
//}


////在屏幕上打印1~10
//int main()
//{
//	int i = 0;
//	//初始化  判断  调整
//	for(i=1;i<=10;i++)
//	{
//		if (i == 5)
//			//break;//等同于while里的break
//			continue;// 不同于while的是会回到调整部分继续执行
//		printf("%d", i);
//	}
//	return 0;
//}



////while循环的缺陷：
////三个部分分散，操作容易失误
//int main()
//{
//	int i = 0;//初始化
//	while (i < 10);//判断
//	{
//		//....
//		i++;//调整
//	}
//	return 0;
//}


//回忆：while循环与putchar和getchar用法
//实例2：
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')//或者的意思
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//实例1：
//int main()
//{
//	int ch = 0;
//	//EOF - end of file 文件结束标志
//	/*while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//
//	//实际价值：
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);//输入密码，并存放在password数组中
//	//缓冲区还剩下一个'\n'
//	//读取一下'\n'
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N):>");
//	ret = getchar();//Y/N
//	//   \n的ASCII值为10,当敲入回车时留下了\n,被ret接收
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}



