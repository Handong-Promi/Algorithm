#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

	int n;
	cin >> n;

	vector<pair<string, int>> student(n);
	int maxIndex=0; int minIndex=0;
	int max, min;
	int year, month, day;

	for(int i = 0 ; i<n; i++){

		cin >> student[i].first >> day >> month >> year;
		student[i].second = (2020-year)*365 + (12-month)*31 + (31-day);

		if(i==0){max = student[i].second; min = student[i].second; maxIndex = i; minIndex = i;}
		else{
			if(student[i].second>max){
				max = student[i].second;
				maxIndex = i;
			}
			if(student[i].second<min){
				min = student[i].second;
				minIndex = i;
			}
		}
	}

	cout << student[minIndex].first << endl;
	cout << student[maxIndex].first;
}
