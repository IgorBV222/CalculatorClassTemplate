#pragma once
#include <iostream>

template <typename X, typename Y>
class Calculator {
public:
	X sum(X x1, X x2) {
		return x1 + x2;
	}
	X sub(X x1, X x2) {
		return x1 - x2;
	}
	X mult(X x1, X x2) {
		return x1 * x2;
	}
	X div(X x1, X x2) {
		if (x2 == 0)
			throw std::invalid_argument("Сan't divide by zero!");
		return x1 / x2;
	}

	Y sum(Y x1, Y x2) {
		return x1 + x2;
	}
	Y sub(Y x1, Y x2) {
		return x1 - x2;
	}
	Y mult(Y x1, Y x2) {
		return x1 * x2;
	}
	Y div(Y x1, Y x2) {
		if (x2 == 0)
			throw std::invalid_argument("Сan't divide by zero!");
		return x1 / x2;
	}

	double sum(X x, Y y) {
		return x + y;
	}
	double sum(Y y, X x) {
		return y + x;
	}
	double sub(X x, Y y) {
		return x - y;
	}
	double sub(Y y, X x) {
		return y - x;
	}
	double mult(X x, Y y) {
		return x * y;
	}
	double mult(Y y, X x) {
		return y * x;
	}
	double div(X x, Y y) {
		if (y == 0)
			throw std::invalid_argument("Сan't divide by zero!");
		return x / y;
	}
	double div(Y y, X x) {
		if (x == 0)
			throw std::invalid_argument("Сan't divide by zero!");
		return y / x;
	}
	/*double div(X x1, X x2) {
		if (x2 == 0)
			throw std::invalid_argument("Сan't divide by zero!");
		return x1 / x2;
	}
	double div(Y x1, Y x2) {
		if (x2 == 0)
			throw std::invalid_argument("Сan't divide by zero!");
		return x1 / x2;
	}*/

	/*int sum(X x, Y y) {
		return x + y;
	}
	int sum(Y y, X x) {
		return y + x;
	}*/
	/*int sub(X x, Y y) {
		return x - y;
	}
	int sub(Y y, X x) {
		return y - x;
	}
	int mult(X x, Y y) {
		return x * y;
	}
	int mult(Y y, X x) {
		return y * x;
	}
	int div(X x, Y y) {
		if (y == 0)
			throw std::invalid_argument("Сan't divide by zero!");
		return x / y;
	}
	int div(Y y, X x) {
		if (x == 0)
			throw std::invalid_argument("Сan't divide by zero!");
		return y / x;
	}
	int div(X x1, X x2) {
		if (x2 == 0)
			throw std::invalid_argument("Сan't divide by zero!");
		return x1 / x2;
	}
	int div(Y x1, Y x2) {
		if (x2 == 0)
			throw std::invalid_argument("Сan't divide by zero!");
		return x1 / x2;
	}*/
};