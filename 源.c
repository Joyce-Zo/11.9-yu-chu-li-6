#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>
#include<stdlib.h>


//#define OFFSETOF(struct_name,member_name) (int)&(((struct S*)0)->member_name)
////						结构体起始位置在0位置处，成员地址-0即偏移量 
////			1.结构体指针，指向结构体中的某个成员 2.去除地址 3.强转int，否则是int*,flout*等
//struct S
//{	
//	char a;	// 0-1
//	int b;	// 4-7
//	char c; // 8-9		10,11，12浪费
//};
//int main()
//{
//	struct S s;
//	printf("%d ", offsetof(struct S,a));	// offsetof 计算偏移量
//	printf("%d ", offsetof(struct S, b));
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d ", OFFSETOF(struct S, a));	// 用宏实现
//	printf("%d ", OFFSETOF(struct S, b));
//	printf("%d ", OFFSETOF(struct S, c));
//
//	return 0;
//}

//int main()
//{
//	unsigned char puc[4]; 
//	// 创建一个数组 0000 0000|0000 0000|0000 0000|0000 0000
//	//			   	  字节 1    字节 2	   字节3    字节 4
//	//				0000 0000|0000 0000|0000 0000|0000 0000
//	struct tagPIM
//	{
//		unsigned char ucPim1;		//	创建占用数组整个第一个字节
//		unsigned char ucData0 : 1;	// 	创建占用数组第二个字节的1个比特位 最后1位		
//		unsigned char ucData1 : 2;	// 	创建占用数组第二个字节的2个比特位 最后2位到3位
//		unsigned char ucData2 : 3;	// 	创建占用数组第二个字节的3个比特位 最后4位到6位
//	}*pstPimData;		// 把位段放在pstPimData指针里
//	pstPimData = (struct tagPIM*)puc; 
//	memset(puc, 0, 4);	//	把puc数组
//	pstPimData->ucPim1 = 2;		// 010	0000 0010
//	//									 0    2
//	pstPimData->ucData0 = 3;	// 011  0000 0001	Data0里只有1个字节，只能放下011的后面的1
//	pstPimData->ucData1 = 4;    // 100	0000 0001	Data1里只有2个字节，只能放下100的后面的00
//	pstPimData->ucData2 = 5;    // 101	0010 1001	Data2里只有3个字节，能放下  101的整个101
//	//									 2    9
//	printf("%02x %02x %02x %02x \n", puc[0], puc[1], puc[2],puc[3]);
//	//								  02       29     00     00
//	return 0;
//}

//union Un
//{
//	short s[7];	// 2*7=14至少14字节		对齐数 2
//	int n;		// 4					对齐数 4
//	//	联合体大小最小是最大成员大小，此处存在对齐，4的倍数 16
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un)); 
//	return 0;
//}

//int main()
//{
//	union
//	{
//		short k;	// 联合共2字节
//		char i[2];
//	}*s, a;
//	s = &a;
//	s->i[0] = 0x39;// 存1个字节	低地址
//	s->i[1] = 0x38;// 存1个字节 高地址
//	printf("%x\n", a.k);//	以short形式打印，一次拿出2个字节
//			//  小端存储 打印时 38 39 
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(0);
//	//		malloc向内存申请0字节空间，返回正常地址，不过该地址无法使用
//	return 0;
//}