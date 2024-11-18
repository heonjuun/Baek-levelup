#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	//크로아티아 알파벳 문자 구하기
	//c=, c-, dz=, d-, lj, nj, s= ,z= 
	//위 목록에 존재하지않는건 하나로 샌다
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