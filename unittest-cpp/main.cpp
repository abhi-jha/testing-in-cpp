#include <iostream>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "WordsTree.h"
#include "Engine.h"

TEST_CASE("This is a test name"){

}

TEST_CASE(){

}

TEST_CASE("This is the first test case"){

}

TEST_CASE("Called with empty digit list --> return no results"){

    WordsTree emptytree;
    Engine t9engine(emptytree);

    Digits digits;

    auto result = t9engine.GetWordsByDigits(digits);

    REQUIRE(result.size() == 0);
}

TEST_CASE("When called with 43556 and known word then return hello"){
    WordsTree knownWords;
    knownWords.AddWord("hello");

    Engine t9Engine(knownWords);

    Digits digits = {4, 3, 5, 5, 6};

    auto result = t9Engine.GetWordsByDigits(digits);

    REQUIRE(result[0] == "hello");
}