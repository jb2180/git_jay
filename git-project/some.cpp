#include <bits/stdc++.h>

using namespace std;

unsigned int exp_mod(unsigned int a,unsigned  int b,unsigned int mod=1000000009){
	return ((a%mod) * (b%mod))%mod;
}

unsigned fact(int a){
	if(a<=0 ){
		return 1;
	}
	return exp_mod(a,fact(a-1));
}

int main(){
	/* This is a sample program*/
	int sm;
	cin>>sm;
	cout<<fact(sm);
	return 0;
}
