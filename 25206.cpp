//#include<iostream>
//using namespace std;
//
////���ϴ��б� ��ǻ�Ͱ��а��� �����ϱ� ���ؼ���, ���������� 3.3 �̻��̰ų� 
//// ������縦 ����ؾ� �Ѵ�.�׷��� �ƻԽ�, ġ���̴� �����ϰ� ������縦 �������� �ʾҴٴ� ����� ���޾Ҵ�!
////ġ������ ���������� ������ִ� ���α׷��� �ۼ��غ���.
////���������� ��������(���� �� ��������)�� ���� ������ �������� ���� ���̴�.
////���ϴ��б� ��ǻ�Ͱ��а��� ��޿� ���� ���������� ���� ǥ�� ����.
//
//
//int main()
//{
//	
//	string subject; //�����
//	string grade; //�������	
//	double rating; //����
//	double sumRate=0.0; //��������
//	double subrating=0.0; //��������
//	double sum = 0.0;//sub * rating
//	
//	//������ 0.5�� �������� ������������ ����
//
//
//
//	for (int i = 0; i < 20; i++)
//	{
//		cin >> subject >> rating >> grade; //����,����,��� ���⼱ ������� ���������� ���� ������
//		if (grade[0] == 'P')continue;  //p�� ������ ��꿡�� ����
//		sumRate += rating; //���� *
//		if (grade[0] == 'F')continue;
//		if (grade[0] == 'A')subrating = 4.0;
//		else if (grade[0] == 'B')subrating = 3.0;
//		else if (grade[0] == 'C')subrating = 2.0;//��������/��������*����
//		else if (grade[0] == 'D')subrating = 1.0; 
//		if (grade[1] == '+')subrating += 0.5;
//		sum += rating * subrating;
//	}
//	cout << sum / sumRate;
//	
//
//	return 0;
//}