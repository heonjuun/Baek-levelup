//#include<stdlib.h>
//#include<stdio.h>
//
//int main()
//{
//	//과목,학점,등급 입력 char[], double, char[]	
//	// 학점 총합 double
//	// 학점 계산 double
//	//20줄 고정
//	//등급이 p라면 계산에서 제외 p면 pass 
//	// 다시 풀어보아야 할 문제
//	char name[50];
//	double rate;
//	char grade[2];
//
//	double sumrate=0.0;
//	double rp=0.0;
//	double temp;
//
//	for (int i = 0; i < 20; i++)
//	{
//		scanf("%s %lf %s", name, &rate, grade);
//		if (grade[0] == 'P') continue;
//		sumrate += rate;
//
//		if (grade[0] == 'F') continue;
//
//		if (grade[0] == 'A') temp = 4;
//		else if (grade[0] == 'B') temp = 3;
//		else if (grade[0] == 'C') temp = 2;
//		else temp = 1;
//		if (grade[1] == '+') temp += 0.5;
//		rp = temp * rate;		
//	}
//	printf("%lf", rp / sumrate);
//
//
//	
//
//
//	return 0;
//}