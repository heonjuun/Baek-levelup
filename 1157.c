//#include<stdio.h>
//#include<string.h>
//
//int main(void)
//{
//	
//	int freq[26] = {0,};
//	int  len ,max, result=0, i, j;	
//	int select = 0;
//	char s[1000000];
//
//	scanf("%s", &s);
//
//	len = strlen(s);
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		for (j = 0; j < len; j++)
//		{
//			if (i == s[j])
//				freq[i - 'a']++;
//		}
//	}
//
//	for (i = 'A'; i <= 'Z'; i++)
//	{
//		for (j = 0; j < len; j++)
//		{
//			if (i == s[j])
//				freq[i - 'A']++;
//		}
//
//	}
//
//	max = freq[0];
//	for (i = 0; i < 26; i++)
//	{
//		if (max < freq[i])
//		{
//			max = freq[i];
//			select = i;
//		}
//	}
//	for (i = 0; i < 26; i++)
//	{
//		if (max == freq[i])
//			result++;
//	}
//	if (result > 1)
//		printf("?\n");
//	else
//		printf("%c", select + 'A');
//
//	
//
//	
//	return 0;
//}