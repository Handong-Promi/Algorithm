#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int num1, num2;
	int sum = 0;
	int min; bool isShown = false;
	cin >> num1 >> num2;

	for(int i = num1; i<=num2; i++){
		if(sqrt(i)-floor(sqrt(i))==0){
			if(!isShown) {isShown = true; min = i;}
			sum += i;
		}
	}
	
	if(!isShown){
		cout << -1;
	}
	else{
		cout << sum << endl;
		cout << min;
	}
}
