#include <bits/stdc++.h>
using namespace std;
#define max 1000

class mystack
{
	int top;

public:
	int a[max];
	mystack()
	{
		top = -1;
	}
	bool push(int n);
	int pop();
	int peek();
	bool isempty();
};

bool mystack::push(int n)
{
	if (top >= max - 1)
	{
		cout << "stack overflow";
		return false;
	}
	else
	{
		a[++top] = n; // preincrement because top initilized with -1, so first incremented to 0 then stored number;
	}
	return true;
}

int mystack::pop()
{
	int x;
	if (top < 0)
	{
		cout << "stack underflow";
		return 0;
	}
	else
	{
		x = a[top--];
	}
	return x;
}

int mystack::peek()
{
	int x;
	if (top < 0)
	{
		cout << "stack is empty";
		return 0;
	}
	else
	{
		x = a[top];
	}

	return x;
}

bool mystack::isempty()
{
	if (top < 0)
	{
		return true;
	}
	return false;
}

int main()
{
	mystack s;

	// push operation
	s.push(2);
	cout << s.peek() << " pushed to stack\n";
	s.push(3);
	cout << s.peek() << " pushed to stack\n";
	s.push(5);
	cout << s.peek() << " pushed to stack\n";
	s.push(1);
	cout << s.peek() << " pushed to stack\n";

	// pop operation
	cout << s.pop() << " popped from stack\n";

	// peek operation
	cout << s.peek() << " is now top element\n";

	// isempty operation
	if (s.isempty())
	{
		cout << "empty stack\n";
	}
	else
	{
		cout << "not empty\n";
	}

	return 0;
}