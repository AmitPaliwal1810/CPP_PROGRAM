/* Pair */

#include<bits/stdc++.h>
using namespace std;

int main(){
	pair<int , int> p[3];
	p[0] = {0,1};
	p[1] = {1,2};
	p[2] = {2,3};

	for(int i = 0 ; i < 3 ; ++i){
		cout << p[i].first << " " << p[i].second << endl;
	}

	swap(p[0] , p[2]);
	cout << "this is swapped array" << endl;
	for(int i = 0 ; i < 3 ; ++i){
		cout << p[i].first << " " << p[i].second << endl;
	}

}