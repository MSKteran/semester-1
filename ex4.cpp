#include<string>
#include<iostream>
#include<stack>

using namespace std;

bool res(string input)
{
	stack <char> brack;
	for (char c : input)
	{
		switch (c)
		{
		case '(': brack.push(')'); break;
		case '[': brack.push(']'); break;
		case '{': brack.push('}'); break;
		case ')':
		case ']':
		case '}':
		    if (brack.empty() or brack.top() != c)
			{
		    	return false;
		    }
		    brack.pop();
		    break;
		default:
		    break;
		}
	}
	return brack.empty();
}

int main()
{
	string input;
	cin >> input;
	if (res(input))
	{
		cout << "YES";
	} else {
		cout << "NO";
	}
}
