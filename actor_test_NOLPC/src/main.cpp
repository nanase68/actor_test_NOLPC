#include "GlobalQueue.h"

#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

GlobalQueue gqueue;

void check_queue() {
	gqueue.checkQueue();
}

int main() {
    std::chrono::milliseconds dura( 1000 );
	cout << "test" << endl;

	Actor actor;

	while (1) {
		Message message(&actor);
		gqueue.enqueue(message);

		gqueue.checkQueue();
		std::this_thread::sleep_for( dura );
		//break;
	}
}
