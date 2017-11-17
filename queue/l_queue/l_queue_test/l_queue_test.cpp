

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../../../doctest.h"

#include "../l_queue.cpp"

TEST_CASE ("testPushPopEmptyCopyConstructor") {
    l_queue<int> q;
    CHECK(q.empty());
    for (int i = 1; i <= 10; i++) {
        q.push(i);
    }
    CHECK(q.size() == 10);
    l_queue<int> p(q);
    for (int i = 1; i <= 10; i++) {
        CHECK(q.front() == i);
        q.pop();
    }

    CHECK(q.size() == 0);
    CHECK(q.empty());

   for (int i = 1; i <= 10; i++) {
        CHECK(p.front() == i);
        p.pop();
    }

}

