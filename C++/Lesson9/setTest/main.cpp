#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	string number;
    string type, value;
    set<int> result;
    set<int>::iterator itr;

	cin >> number;

    for(int i=0; i < stoi(number); i++)
	{
    	cin >> type >> value;
    	//cout << "type: " << type << " value: " << value << endl;

    	if (stoi(type) == 1)
		{
    		//cout << "add" << endl;
			result.insert(stoi(value));
		}
    	else if (stoi(type) == 2)
		{
			itr = result.find(stoi(value));
			if (itr == result.end()) {
				;
			}
			else{
				result.erase(stoi(value));
			}
		}
    	else if (stoi(type) == 3)
		{
			itr = result.find(stoi(value));
			if (itr == result.end()) {
				cout << "No" << endl;
			}
			else {
				cout << "Yes" << endl;
			}
		}
	}

    return 0;
}

