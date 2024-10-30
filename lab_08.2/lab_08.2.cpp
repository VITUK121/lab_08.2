#include <iostream>
#include <string>

using namespace std;

int Count(string str) {
	int start = str.find_last_of(' ');
	int counter = 0;

	if (start < 0) {
		return 0;
	}
	
	for (int i = start; str[i] != 0; i++) {
		if (str[i] == 'a') {
			counter++;
		}
	}
	return counter;
}

int main(){
	string str;
	getline(cin,str);

	cout << "Counter = " << Count(str);
}