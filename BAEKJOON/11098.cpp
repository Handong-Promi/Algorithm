#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){

	int n, p;
	cin >> n;

	while(n--){

		cin >> p;
		vector<pair<int, string>> player(p);
		int ans = 0; int i = 0;
		while(p--){
			cin >> player[i].first >> player[i].second;
			if(i==0) ans = i;
			else{
				if(player[i].first>player[ans].first){
					ans = i;
				}
			}
			i++;
		}
		cout << player[ans].second << endl;
	}
}
