#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../include/doctest.h" // Include doctest header
#include "../include/Time.h" // Include your Time class header

TEST_CASE("Time Addition") {
    Time t1(2, 30);
    Time t2(1, 45);
    Time t3 = t1 + t2;
    CHECK(t3.getHours() == 4);
    CHECK(t3.getMinutes() == 15);

    Time t4(0, 30);
    Time t5(0, 45);
    Time t6 = t4 + t5;
    CHECK(t6.getHours() == 1);
    CHECK(t6.getMinutes() == 15);

    Time t7(2, 50);
    Time t8(3, 20);
    Time t9 = t7 + t8;
    CHECK(t9.getHours() == 6);
    CHECK(t9.getMinutes() == 10);
}

TEST_CASE("Time Addition Assignment") {
    Time t1(1, 30);
    Time t2(2, 15);
    t1 += t2;
    CHECK(t1.getHours() == 3);
    CHECK(t1.getMinutes() == 45);

    Time t3(0, 30);
    Time t4(0, 30);
    t3 += t4;
    CHECK(t3.getHours() == 1);
    CHECK(t3.getMinutes() == 0);
}

TEST_CASE("Time Comparison Operators") {
    Time t1(1, 30);
    Time t2(2, 0);
    Time t3(1, 30);

    CHECK(t1 < t2);
    CHECK_FALSE(t2 < t1);
    CHECK_FALSE(t1 < t3);

    CHECK(t2 > t1);
    CHECK_FALSE(t1 > t2);
    CHECK_FALSE(t1 > t3);

    CHECK(t1 == t3);
    CHECK_FALSE(t1 == t2);
}