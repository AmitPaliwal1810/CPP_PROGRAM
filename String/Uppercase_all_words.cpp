#include<bits/stdc++.h>
using namespace std;

char uppperConvert(char str){

	return 'A' + (str - 'a');
}

int main(){

	while(true){
		string s;
		cin >> s;

		if(s.size() == 0 ){
			break;
		}

		for(int i = 0 ; i < s.size() ; ++i ){
			s[i] = uppperConvert(s[i]);
		}

		cout << s << endl;

	}

}


/*

i/p : hello this is me
o/p : HELLO THIS IS ME 
*/