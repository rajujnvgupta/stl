/*
    @rajujnvgupta
    01/03/2020
*/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
const int mod = 1e9+7;
const int inf = 1e9+5;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int, int>>time(n);
		for(int i = 0; i < n; i++){
			int s, e;
			cin>>s>>e;
			time[i] = {s, e};
		}
		sort(time.begin(), time.end());
		int counter = 1;
		pair<int, int>prev = time[0];
		for(int i = 1; i < n; i++){
			if(time[i].first > prev.first && time[i].second < prev.second){
				prev = time[i];
			}else if(time[i].first >= prev.second){
				counter++;
				prev = time[i];
			}else{
				continue;
			}
		}
		cout<<counter<<endl;
	}
	return 0;
}
