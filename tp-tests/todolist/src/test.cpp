
#include "todolist.hpp"

#include <catch2/catch_test_macros.hpp>

#include <sstream>

TEST_CASE ("Task equality operator") {
    // Task task1 {1, "Sample task"};
    // Task task2 {1, "Sample task"};
    // Task task3 {2, "Another task"};

    // REQUIRE(task1 == task2);
    // REQUIRE(not (task1 == task3));
}

TEST_CASE ("TodoList equality operator") {
    // TodoList todo1 {2, { Task{1, "Task one"}, Task{2, "Task two"} }};
    // TodoList todo2 {2, { Task{1, "Task one"}, Task{2, "Task two"} }};
    // TodoList todo3 {3, { Task{1, "Task one"}, Task{3, "Task three"} }};

    // REQUIRE(todo1 == todo2);
    // REQUIRE(not (todo1 == todo3));
}

TEST_CASE  ("Create an empty TodoList") {
    // TodoList todo = createTodoList();
    // REQUIRE(todo == TodoList{1, {}});
}

TEST_CASE ("Add tasks to TodoList") {
    // TodoList todo = createTodoList();
    // addTask(todo, "Buy milk");
    // addTask(todo, "Walk the dog");

    // TodoList expectedTodo {3, {
    //     Task{1, "Buy milk"},
    //     Task{2, "Walk the dog"}
    // }};
    // REQUIRE(todo == expectedTodo);
}

TEST_CASE ("Format TodoList") {
    // TodoList todo = createTodoList();
    // addTask(todo, "Buy milk");
    // addTask(todo, "Walk the dog");

    // std::ostringstream oss;
    // formatTodoList(todo, oss);

    // std::string expectedOutput =
    //     "[1] Buy milk\n"
    //     "[2] Walk the dog\n";

    // REQUIRE(oss.str() == expectedOutput);
}

TEST_CASE ("Remove task from TodoList") {
    // TodoList todo = createTodoList();
    // addTask(todo, "Buy milk");
    // addTask(todo, "Walk the dog");
    // addTask(todo, "Read a book");

    // bool removed = removeTask(todo, 2); // Remove "Walk the dog"
    // REQUIRE(removed == true);

    // TodoList expectedTodo {4, {
    //     Task{1, "Buy milk"},
    //     Task{3, "Read a book"}
    // }};
    // REQUIRE(todo == expectedTodo);

    // // Attempt to remove a non-existing task
    // removed = removeTask(todo, 5);
    // REQUIRE(removed == false);
}

