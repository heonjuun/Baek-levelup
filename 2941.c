//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	//ũ�ξ�Ƽ�� ���ĺ� ���� ���ϱ�
//	//c=, c-, dz=, d-, lj, nj, s= ,z= 
//	//�� ��Ͽ� ���������ʴ°� �ϳ��� ����
//	char a[100];
//	int count = 0;
//	scanf("%s", &a);
//
//	for (int i = 0; i < strlen(a); i++)
//	{		
//		count++;
//		if (a[i] == 'c')
//		{
//			if (a[i + 1] == '-')
//			{
//				count -= 1;
//			}
//			else if (a[i + 1] == '=')
//			{
//				count -= 1;
//			}
//		}		
//		else if (a[i] == 'd')
//		{
//			if (a[i + 1] == '-')
//			{
//				count -= 1;
//			}
//			else if (a[i + 1] == 'z' && a[i + 2] == '=')
//			{
//				count -= 1;
//			}
//		}
//		else if (a[i] == 'l') {
//			if (a[i + 1] == 'j')
//			{
//				count -= 1;
//			}
//		}
//		else if (a[i] == 'n') {
//			if (a[i + 1] == 'j')
//			{
//				count -= 1;
//			}
//		}
//		else if (a[i] == 's')
//		{
//			if (a[i + 1] == '=')
//			{
//				count -= 1;
//			}
//		}
//		else if (a[i] == 'z')
//		{
//			if (a[i + 1] == '=')
//			{
//				count -= 1;
//			}
//		}
//		
//		
//		
//	}		
//	printf("%d", count);
//
//	return 0;
//}