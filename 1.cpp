#include<bits/stdc++.h>
using namespace std;

int main(){
		long n;
		cin>>n;
		long a[n];
		int b[n];
		for(auto&x:a)cin>>x;
		stack<int>s;
		for(int i=0;i<n;i++){
			if(s.empty()){
				s.push(i);
			}
			else 
			{
				while(!s.empty()&&a[s.top()]<a[i]){
					b[s.top()]=a[i];
					s.pop();
				}
				s.push(i);
			}
		}
		while(!s.empty()){
			b[s.top()]=-1;
			s.pop();
		}
		for(auto x:b)cout<<x<<" ";
	}
	

