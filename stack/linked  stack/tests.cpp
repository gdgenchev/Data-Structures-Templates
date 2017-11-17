#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../../doctest.h"
#include "l_stack.cpp"


TEST_CASE ("test_push_pop_top_empty") {
    l_stack<int> s;
    CHECK(s.empty());
    for (int i = 1; i <= 10; i++) {
        s.push(i);
    }
    for (int i = 10; i >= 1; i--) {
        CHECK (s.top() == i);
        s.pop();
    }
    CHECK (s.empty());
    CHECK (!s.pop());
}