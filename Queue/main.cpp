
#include"Queue.h"
#include <iostream>
using namespace std;

int main()
{
	Queue< char, 100> q;
	for (char c = 'A'; c <= 'Z'; c++) {
		q.push(c);
	}
	while (!q.isEmpty()) {
		cout << q.pop() << ' ';
	}


}

