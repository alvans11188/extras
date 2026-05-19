#include <bits/stdc++.h>
using namespace std;
int main(void){
	int sum=0,binario[8]={1,2,4,8,16,32,64,128};
	string n,m;cin>>n;
	int tam=n.length();
	int pos=0;
	//reverse(n.begin(),n.end());
	for (int i=tam-1;i>=0;i--){
		if(n[i]=='1'){
			sum=sum+binario[pos];
		}
		pos++;
	}
	cout<<sum;
	
	return 0;
}