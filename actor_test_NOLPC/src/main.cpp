#include "GlobalQueue.h"

#include <iostream>
using namespace std;

GlobalQueue gqueue;

void check_queue() {
	gqueue.checkQueue();
}

int main() {
	gqueue.checkQueue();
	cout << "test" << endl;
	while (1) {
		break;
	}
}
