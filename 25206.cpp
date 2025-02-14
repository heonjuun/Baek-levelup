//#include<iostream>
//using namespace std;
//
////인하대학교 컴퓨터공학과를 졸업하기 위해서는, 전공평점이 3.3 이상이거나 
//// 졸업고사를 통과해야 한다.그런데 아뿔싸, 치훈이는 깜빡하고 졸업고사를 응시하지 않았다는 사실을 깨달았다!
////치훈이의 전공평점을 계산해주는 프로그램을 작성해보자.
////전공평점은 전공과목별(학점 × 과목평점)의 합을 학점의 총합으로 나눈 값이다.
////인하대학교 컴퓨터공학과의 등급에 따른 과목평점은 다음 표와 같다.
//
//
//int main()
//{
//	
//	string subject; //과목명
//	string grade; //전공등급	
//	double rating; //평점
//	double sumRate=0.0; //평점총합
//	double subrating=0.0; //과목평점
//	double sum = 0.0;//sub * rating
//	
//	//학점은 0.5가 들어가지않음 과목평점에는 들어간다
//
//
//
//	for (int i = 0; i < 20; i++)
//	{
//		cin >> subject >> rating >> grade; //과목,학점,등급 여기선 학점계산 과목평점은 따로 나눠서
//		if (grade[0] == 'P')continue;  //p인 과목은 계산에서 제외
//		sumRate += rating; //학점 *
//		if (grade[0] == 'F')continue;
//		if (grade[0] == 'A')subrating = 4.0;
//		else if (grade[0] == 'B')subrating = 3.0;
//		else if (grade[0] == 'C')subrating = 2.0;//학점총합/과목평점*학점
//		else if (grade[0] == 'D')subrating = 1.0; 
//		if (grade[1] == '+')subrating += 0.5;
//		sum += rating * subrating;
//	}
//	cout << sum / sumRate;
//	
//
//	return 0;
//}