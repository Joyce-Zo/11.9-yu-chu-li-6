#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>
#include<stdlib.h>


//#define OFFSETOF(struct_name,member_name) (int)&(((struct S*)0)->member_name)
////						�ṹ����ʼλ����0λ�ô�����Ա��ַ-0��ƫ���� 
////			1.�ṹ��ָ�룬ָ��ṹ���е�ĳ����Ա 2.ȥ����ַ 3.ǿתint��������int*,flout*��
//struct S
//{	
//	char a;	// 0-1
//	int b;	// 4-7
//	char c; // 8-9		10,11��12�˷�
//};
//int main()
//{
//	struct S s;
//	printf("%d ", offsetof(struct S,a));	// offsetof ����ƫ����
//	printf("%d ", offsetof(struct S, b));
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d ", OFFSETOF(struct S, a));	// �ú�ʵ��
//	printf("%d ", OFFSETOF(struct S, b));
//	printf("%d ", OFFSETOF(struct S, c));
//
//	return 0;
//}

//int main()
//{
//	unsigned char puc[4]; 
//	// ����һ������ 0000 0000|0000 0000|0000 0000|0000 0000
//	//			   	  �ֽ� 1    �ֽ� 2	   �ֽ�3    �ֽ� 4
//	//				0000 0000|0000 0000|0000 0000|0000 0000
//	struct tagPIM
//	{
//		unsigned char ucPim1;		//	����ռ������������һ���ֽ�
//		unsigned char ucData0 : 1;	// 	����ռ������ڶ����ֽڵ�1������λ ���1λ		
//		unsigned char ucData1 : 2;	// 	����ռ������ڶ����ֽڵ�2������λ ���2λ��3λ
//		unsigned char ucData2 : 3;	// 	����ռ������ڶ����ֽڵ�3������λ ���4λ��6λ
//	}*pstPimData;		// ��λ�η���pstPimDataָ����
//	pstPimData = (struct tagPIM*)puc; 
//	memset(puc, 0, 4);	//	��puc����
//	pstPimData->ucPim1 = 2;		// 010	0000 0010
//	//									 0    2
//	pstPimData->ucData0 = 3;	// 011  0000 0001	Data0��ֻ��1���ֽڣ�ֻ�ܷ���011�ĺ����1
//	pstPimData->ucData1 = 4;    // 100	0000 0001	Data1��ֻ��2���ֽڣ�ֻ�ܷ���100�ĺ����00
//	pstPimData->ucData2 = 5;    // 101	0010 1001	Data2��ֻ��3���ֽڣ��ܷ���  101������101
//	//									 2    9
//	printf("%02x %02x %02x %02x \n", puc[0], puc[1], puc[2],puc[3]);
//	//								  02       29     00     00
//	return 0;
//}

//union Un
//{
//	short s[7];	// 2*7=14����14�ֽ�		������ 2
//	int n;		// 4					������ 4
//	//	�������С��С������Ա��С���˴����ڶ��룬4�ı��� 16
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
//		short k;	// ���Ϲ�2�ֽ�
//		char i[2];
//	}*s, a;
//	s = &a;
//	s->i[0] = 0x39;// ��1���ֽ�	�͵�ַ
//	s->i[1] = 0x38;// ��1���ֽ� �ߵ�ַ
//	printf("%x\n", a.k);//	��short��ʽ��ӡ��һ���ó�2���ֽ�
//			//  С�˴洢 ��ӡʱ 38 39 
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(0);
//	//		malloc���ڴ�����0�ֽڿռ䣬����������ַ�������õ�ַ�޷�ʹ��
//	return 0;
//}