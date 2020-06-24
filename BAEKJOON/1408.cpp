#include <iostream>
using namespace std;

int main(){

	int h, m, s;
	int ct, st;
	int leftTime;

	scanf("%d:%d:%d", &h, &m, &s);
	ct = s + m*60 + h*3600;
	scanf("%d:%d:%d", &h, &m, &s);
	st = s + m*60 + h*3600;
	if(ct>st) st += 24*3600;

	leftTime = st - ct;

	h = leftTime/3600, leftTime %= 3600;
	m = leftTime/60, leftTime %= 60;
	s = leftTime;

	printf("%02d:%02d:%02d", h, m, s);
}
