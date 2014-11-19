#include "GlobalQueue.h"

GlobalQueue gqueue;

void check_queue() {
	gqueue.checkQueue();
}

int main() {
	gqueue.checkQueue();
	while (1) {
		break;
	}
}
