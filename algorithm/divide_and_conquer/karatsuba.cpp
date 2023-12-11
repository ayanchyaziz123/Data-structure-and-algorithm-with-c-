#include<bits/stdc++.h>
using namespace std;

int makeEqualLength(string &x. string &y){
	int len1 = x.size();
	int len2 =  y.size();
	if(len1 < len2){
		for(int i = 0; i < len2 - len1; i++){
			x = '0' + x;
		}
		return len2;
	}
	if(len2 <len1){
		for(int i = 0; i < len1 - len2; i++){
			y ='0' + y;
		}
	}
	return len1;

}
void multiply(string x, string y){
	int n = makeEqualLength(x, y);
	
}

int main(){

	return 0;
}