#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../../../doctest.h"

#include "../array_queue.cpp"

TEST_CASE ("testPushPopEmptyResize") {
    array_queue<int> q;
    CHECK(q.empty());
    for (int i = 1; i <= 10; i++) {
        q.push(i);
        if (i == 5) {
            CHECK(q.getCapacity() == 8);
        }
    }
    for (int i = 1; i <= 10; i++) {
        CHECK(q.front() == i);
         q.pop();
    }

    CHECK(q.empty());

}

