//#include<stdlib.h>
//#include<stdio.h>
//
//int main()
//{
//	//����,����,��� �Է� char[], double, char[]	
//	// ���� ���� double
//	// ���� ��� double
//	//20�� ����
//	//����� p��� ��꿡�� ���� p�� pass 
//	// �ٽ� Ǯ��ƾ� �� ����
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