#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//ָ�������
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)((int)a + 1);//((int)a+1)��ʾ������a����Ԫ�غ�����һ���ֽ�(һ������Ϊ4���ֽ�)
//	printf("%x %x", p1[-1], *p2);//4  2000000  %x��ʾ��ʮ��������ʽ���һ������(���ĸ��ֽ�)������ⷨ����С�˴洢��֪ʶ
//	return 0;
//}
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//{}�е�()��ʼ����()�к�һ��ֵ����a�д洢��ֵΪ1 3 5 0 0 0
//	int* p;
//	p = a[0];//��⣺a[][]�� a����������ĵ�ַ��a[]���Կ���ĳ�еĵ�ַ��p=a[0]������p�д�ŵ��������һ�еĵ�ַ
//	printf("%d\n", p[0]);//1  
//	return 0;
//}
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//aΪ�����һ�еĵ�ַ������Ϊint (*)[5]  p������Ϊint (*)[4],����ͬ�����о���
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//0,0---->FFFFFFFC,-4  ��Ϊp��a�����Ͳ�ͬ�����Լ�һ��������Ҳ��ͬ��a[4]�ɿ���*(a+4) a+1����һ�����֣�5����ֵ��p+1����4����ֵ  
//	//����ÿ��һ��ֵΪһ�����Եڶ���Ϊ-4�����������ƴ�ӡ������һ��ҲΪ-4������%p��ӡ��������֮�֣�ֱ����ʮ��������ʽ��ӡ
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
//	char** p = a;//char** p=a �������Ϊ *p ��ʾp��һ��ָ�룬char*��ʾa������
//	p++;
//	printf("%s\n", *p);//at  %s���Խ�����Ԫ�ص�ַ������ӡһ���ַ�
//	return 0;
//}
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };//�Ƚϸ���
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//ע��cpp�Ӻ󲻻��Լ�����  POINT
//	printf("%s\n", *--*++cpp+3);//ER  *--*++cpp��ʾcpp��һ��ָ��c+1 Ȼ��c+1+(-1)��Ϊc,�������ENTER��E������λ��ʼ��ӡ
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	return 0;
//}
//��ϰ�����һ�������ַ���  ��ABCD����һ���ַ�ΪBCDA ���������ַ���ΪCDAB
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
//дһ�������� ���Դ��ո�
//#include<assert.h>
//void reverse(char* arr)
//{
//	assert(arr);//�ж�arr���ǿ�ָ��
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
//	//scanf("%s", &arr);//scanf�����ո���ֹͣ
//	gets(arr);//��ȡһ�У�ʲô�����ȡ
//	reverse(arr);
//	printf("�������Ϊ��%s\n", arr);
//	return 0;
//}
//����һ�����ĺ�
//������2 3 �����2+22++222��ֵ
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