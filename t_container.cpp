#include<iostream>
#include "t_vector.h"

using namespace std;

int main(){
	Vector<int>v;
	int vec_len;
	cin>>vec_len;
	cout<<vec_len<<endl;
	for(int i = 0; i < vec_len; i++){
		int x;
		cin>>x;
		if(x % 2){ //pop with 50% probability 
			v.pop_back();
		}else{
			//insert with 50% probability
			v.push_back(x);
		}
	}
	//v.push_back(1);
	//v.push_back(2);
	//v.push_back(3);
	//v.pop_back();
	//v.push_back(4);
	
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<endl;
	}
	return 0;
}
