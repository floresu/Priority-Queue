#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
	priority_queue<int> queue;
	
	// Values that are inserted.
	queue.push(5);
	queue.push(39);
	queue.push(20);
	queue.push(55);
	queue.push(88);
	queue.push(100);
	queue.push(23);
	queue.push(19);

	
	// Loop 8 times.
	for (int i = 0; i < 8; i++)
	{
		cout << queue.top() << endl;		// Prints the value of the queue.
		queue.pop(); 				// Pop value from the top of the queue.
	}

	return 0;
}
