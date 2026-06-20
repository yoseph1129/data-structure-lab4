#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"Students.h"

const int MAX_STACK_SIZE = 20;

inline void error(const char* message);

class StudentsStack
{
    int top;
    Student data[MAX_STACK_SIZE]; // Student 객체를 담는 스택
public:
    StudentsStack() { top = -1; }
    bool isEmpty() { return top == -1; }
    bool isFull() { return top == MAX_STACK_SIZE - 1; }

    void push(Student e) {
        if (isFull()) error("스택 포화 에러");
        data[++top] = e;
    }

    Student pop() {
        if (isEmpty()) error("스택 공백 에러");
        return data[top--];
    }

    Student peek() {
        if (isEmpty()) error("스택 공백 에러");
        return data[top];
    }

    void display() {
        printf("[스택 항목의 수 = %2d]\n", top + 1);
        for (int i = 0; i <= top; i++)
            data[i].display(); // 학생 정보 출력 함수 호출
    }
};
inline void error(const char* message) {
    printf("%s\n", message);
    exit(1);
};