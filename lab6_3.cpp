#include<iostream>
using namespace std;

char before(char x){
    
    if (int(x) >= 65 && int(x) <= 90) {
        short num = (short) x - 1;
        
        return (num < 65 ? 'Z' : num);
    }
    else {
        return '0';
    }
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}