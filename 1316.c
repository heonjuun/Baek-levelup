#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>


//���� �ܾ �����ؼ� ��Ÿ���°Ŵ� �׷�ܾ������� ���� ���ӵ��� �ʴ´ٸ� �װ����׷�ܾ�� ǥ�����
//aabb o
//aabba x
int main()
{
	char s[101];
	int groupcount = 0;
	int count = 0;
	//�Է��� ī��Ʈ�� ���ϰ�
	// �Է��� n���� ���������� �ѹ����Դ� �ܾ �̾������ʰ� �������� ������ �� ������ ī��Ʈ��������
	scanf("%d", &count);
	for (int i = 0; i < count; i++)
	{
		scanf("%s", &s);
		bool groupchecker = true;
		bool visited[26] = { false };

		for (int j = 0; j < strlen(s); j++)
		{
			if(j > 0 && s[j] != s[j - 1] && visited[s[j] - 'a'])
			{
				groupchecker = false;
				break;
			}
			visited[s[j] - 'a'] = true;
		}
		if (groupchecker)
		{
			groupcount++;
		}


		
	}
	printf("%d\n", groupcount);
	
	

	


	return 0;
}
