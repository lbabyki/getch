#include <iostream>

using namespace std;

int main(){
     int n;
     cin >> n;
     if (n % 4 == 0 && n > 0){cout << "YES";
	 }
	 else if ( n % 4 != 0 && n >0){cout <<"NO";
	 }
	 else if ( n <= 0 ){
	 
	 cout <<"invalid";}
}