#include<bits/stdc++.h>
using namespace std;

class Fun{
	public:
	void operator()(string param){
		cout<<" functional object is called "<<param<<endl;
	}
};
int main(){
	
	Fun f;
	f("asdf");
}
