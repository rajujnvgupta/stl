#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
const int mod = 1e9+7;
const int inf = 1e9+5;


//template give freedom from datatype											///BookCompare object is passed
//iterator give freedom from container
//Compare give freedom form datatype comparator
template<class ForwardIterator, class T, class Compare>
ForwardIterator search_a(ForwardIterator start, ForwardIterator end, T key, Compare cmp){
	while(start != end){
		if(cmp(*start, key)){
			return start;
		}
		start++;
	}
	return end;
}

class Book{
public:
	string name;
	int price;
	Book(string nm, int prc){
		name = nm;
		price = prc;
	}
};

class BookCompare{
	public:
	bool operator()(Book b1, Book b2){
		if(b1.price < b2.price){
			return true;
		}else{
			return false;
		}
	}
};
	
int main(){
	vector<Book>b;
	Book b1("c", 12), b2("c++", 13), b3("java", 23);
	b.push_back(b1);
	b.push_back(b2);
	b.push_back(b3);
	Book booktofind("python", 13);
	BookCompare cmp;
	
	if(cmp(b2, booktofind)){   ///used to find book
		cout<<"book find "<<b2.name<<endl;
	}
	if(cmp(b2, b3)){  
		cout<<b2.price << ' '<<b3.price<<endl;
	}
	
	auto itr = search_a(b.begin(), b.end(), booktofind, cmp);
	if(itr != b.end()){
		cout<<"book found in library"<<endl;
	}else{
		cout<<"book not found"<<endl;
	}
	return 0;
}
