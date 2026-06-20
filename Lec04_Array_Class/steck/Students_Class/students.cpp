#include"StudentsStack.h"

int main() {
	StudentsStack stack;
	stack.push(Student(202512230, "홍길동", "컴퓨터공학과"));
	stack.push(Student(202312225, "이순신", "전자공학과"));
	stack.push(Student(202512626, "황희", "화학공학과"));
	stack.display();
	stack.pop();
	stack.display();
	
	return 0;
}