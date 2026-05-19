#include <bits/stdc++.h>
using namespace std;
int main(void){
	int sum=0,binario[8]={1,2,4,8,16,32,64,128};
	string n;cin>>n;
	reverse(n.begin(),n.end());
	for(int i=0;i<n.length();i++){
		if(n[i]=='1'){
			sum=sum+binario[i];
		}
	}
	cout<<sum;
	return 0;
}