#include<bits/stdc++.h>
using namespace std;

int tripleStep_dp(int n, vector<int> &mem){
	if(n<0) return 0;
	else if(n==0) return 1;
	else if(mem[n] > -1) return mem[n];
	else{
		mem[n] = tripleStep_dp(n-1, mem) + tripleStep_dp(n-2, mem);
		return mem[n];
	}
}

int tripleStep_rec(int n){
	if(n==0) return 1;
	if(n<0) return 0;
	return tripleStep_rec(n-1)+tripleStep_rec(n-2)+tripleStep_rec(n-3);
}

int main(){
	int inp;
	cin >> inp;
	vector<int> mem(inp, -1);
	//cout << tripleStep_rec(inp) << endl;
	cout << tripleStep_dp(inp, mem) << endl;
	return 0;
}