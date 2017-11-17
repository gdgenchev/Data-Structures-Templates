#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../../doctest.h"

#include "array_stack.cpp"

TEST_CASE("test_push_pop_top_empty") {
    array_stack<int> s;
            CHECK(s.empty());
    for (int i = 1; i <= 10; i++) {
        s.push(i);
    }
    for (int i = 10; i >= 1; i--) {
                CHECK(s.top() == i);
        s.pop();
    }
            CHECK(s.empty());
            CHECK(!s.pop());
}

TEST_CASE("test_resizing") {
    array_stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
            CHECK(s.getCapacity() == 4);
    s.push(5);
            CHECK(s.getCapacity() == 8);
}


TEST_CASE("test_operator=_copyConstructor"){
    array_stack<int> s;

    for (int i = 1; i <= 6; i++) {
        s.push(i);
        std::cout << s.getCapacity();
    }

   array_stack<int> s_copy(s);

    for(int i = 6; i >= 1; i--) {
                CHECK(s_copy.top() == s.top());
        s.pop();
        s_copy.pop();
    }

    array_stack<int> s_operator;
    s_operator = s;
            CHECK(s_operator.empty());

    for (int i = 1; i <= 6; i++) {
        s.push(i);
    }

    s_operator = s;

    for(int i = 6; i >= 1; i--) {
                CHECK(s_operator.top() == s.top());
        s.pop();
        s_operator.pop();
    }
}
