#include<iostream>
#include<stack>

using namespace std;

int main()
{
	string inputStr;
	int N, count = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> inputStr;
		stack<char> myStack;

		// index�� �� ���� ���� stack �� ���� �ֿ� �ִ� ���ڿ� ������ pop �ƴϸ� push
		for (int j = 0; j < inputStr.length(); j++) {
			if (myStack.empty())
				myStack.push(inputStr[j]);
			else {
				if (myStack.top() == inputStr[j])
					myStack.pop();
				else
					myStack.push(inputStr[j]);
			}
		}
		
		if (myStack.empty())
			count++;
	}

	cout << count;

	return 0;
}