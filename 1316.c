//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//
////같은 단어가 연속해서 나타나는거는 그룹단어이지만 만약 연속되지 않는다면 그것은그룹단어로 표기못함
////aabb o
////aabba x
//int main()
//{
//	char s[101];
//	int groupcount = 0;
//	int count = 0;
//	//입력할 카운트를 정하고
//	// 입력한 n번의 각각문장이 한번나왔던 단어가 이어지지않고 떨어져서 나오면 그 문장은 카운트하지않음
//	scanf("%d", &count);
//	for (int i = 0; i < count; i++)
//	{
//		scanf("%s", &s);
//		bool groupchecker = true;
//		bool visited[26] = { false };
//
//		for (int j = 0; j < strlen(s); j++)
//		{
//			if(j > 0 && s[j] != s[j - 1] && visited[s[j] - 'a'])
//			{
//				groupchecker = false;
//				break;
//			}
//			visited[s[j] - 'a'] = true;
//		}
//		if (groupchecker)
//		{
//			groupcount++;
//		}
//
//
//		
//	}
//	printf("%d\n", groupcount);
//	
//	
//
//	
//
//
//	return 0;
//}
