#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//指针笔试题
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)((int)a + 1);//((int)a+1)表示在数组a的首元素后跳过一个字节(一个整数为4个字节)
//	printf("%x %x", p1[-1], *p2);//4  2000000  %x表示以十六进制形式输出一个整数(即四个字节)，此题解法包含小端存储等知识
//	return 0;
//}
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//{}中的()初始化是()中后一个值，即a中存储的值为1 3 5 0 0 0
//	int* p;
//	p = a[0];//理解：a[][]中 a是整个数组的地址，a[]可以看作某行的地址，p=a[0]，所以p中存放的是数组第一行的地址
//	printf("%d\n", p[0]);//1  
//	return 0;
//}
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//a为数组第一行的地址，类型为int (*)[5]  p的类型为int (*)[4],不相同，会有警告
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//0,0---->FFFFFFFC,-4  因为p和a的类型不同，所以加一跳过的数也不同，a[4]可看作*(a+4) a+1跳过一组数字，5个数值，p+1跳过4个数值  
//	//所以每加一差值为一，所以第二个为-4（以整数形似打印），第一个也为-4，但以%p打印就无正负之分，直接以十六进制形式打印
//	return 0;
//}
//int main()
//{
//	int a[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)(*(a+1));
//	printf("%d,%d\n", *(p1 - 1), *(p2 - 1));//10,5
//	return 0;
//}
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** p = a;//char** p=a 可以理解为 *p 表示p是一个指针，char*表示a的类型
//	p++;
//	printf("%s\n", *p);//at  %s可以接收首元素地址并向后打印一串字符
//	return 0;
//}
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };//比较复杂
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//注：cpp加后不会自己减少  POINT
//	printf("%s\n", *--*++cpp+3);//ER  *--*++cpp表示cpp加一后指向c+1 然后c+1+(-1)变为c,加三则从ENTER中E后退三位开始打印
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	return 0;
//}
//练习：设计一个左旋字符串  如ABCD左旋一个字符为BCDA 左旋两个字符串为CDAB
//void spin(char* p,int n,int sz)
//{
//	char b;
//	char* p1 = &b;
//	int i = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			*p1 = *(p + 1);
//			p1++;
//			p++;
//		}
//
//	}
//	*(p1+n-1)=
//}
//int main()
//{
//	char a = "ABCD";
//	int n = 0;
//	int sz = strlen(a);
//	scanf("%d", &n);
//	spin(a,n,sz);
//	printf("%s\n", a);
//	return 0;
//}
//写一个逆序函数 可以带空格
//#include<assert.h>
//void reverse(char* arr)
//{
//	assert(arr);//判定arr不是空指针
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = {0};
//	//scanf("%s", &arr);//scanf读到空格则停止
//	gets(arr);//读取一行，什么都会读取
//	reverse(arr);
//	printf("逆序后函数为：%s\n", arr);
//	return 0;
//}
//计算一串数的和
//如输入2 3 则计算2+22++222的值
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n,&m);
//	int i = 0;
//	int ret = 0;
//	int sum = 0;
//	for (i = 0; i < m; i++)
//	{
//		ret = ret * 10 + n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}