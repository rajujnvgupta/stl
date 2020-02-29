#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
const int mod = 1e9+7;
const int inf = 1e9+5;

//template<typename T>
//int search(T arr[], int n, T key){
	
	//for(int i = 0; i < n; i++){
		//if(arr[i] == key){
			//return i;
		//}
	//}
	//return n;
//}

template<class ForwardIterator, class T>
ForwardIterator search_a(ForwardIterator start, ForwardIterator end, T key){
	while(start != end){
		if(*start == key){
			return start;
		}
		start++;
	}
	return end;
}

int main(){
	//int arr[] = {3, 0, 3, 4, 9, 3};
	//int n = sizeof(arr)/sizeof(int);
	//int ans = search(arr, n, 3);
	
	list<int>l = {3, 0, 3, 4, 9, 3};
	auto itr = search_a(l.begin(), l.end(), 3);

	if(itr == l.end()){
		cout<<"element is not present"<<endl;
	}else{
		cout<<*itr<<endl;
	}
	return 0;
}
