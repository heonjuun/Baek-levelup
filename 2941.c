#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	//ũ�ξ�Ƽ�� ���ĺ� ���� ���ϱ�
	//c=, c-, dz=, d-, lj, nj, s= ,z= 
	//�� ��Ͽ� ���������ʴ°� �ϳ��� ����
	char a[100];
	int count = 0;
	scanf("%s", &a);

	for (int i = 0; i < strlen(a); i++)
	{		
		if (a[i] == "c")
		{
			if (a[i + 1] == "-")
			{

			}

		}
	
	}		
	printf("%d", count);

	return 0;
}