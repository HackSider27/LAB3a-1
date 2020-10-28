#pragma once
#include "Vector.h"
#include "Util.h"
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <iostream>

Vector::Vector(int i) {
	this->i = 0;
	for (int l = 0; l < this->SZ; l++)
		this->Elem[l] = 0;
}
Vector::Vector(int E, int i) {
	this->i = i;
	this->Elem[0] = E;
}

Vector::Vector(int i, int* E) {
	this->i = 0;
	for (int l = 0; l < i; l++) {
		SetVector(E[l]);
	}
}

void Vector::GetVector() {
	std::cout << "{";
	for (int l = 0; l < this->i; l++)
		if (l != this->i - 1)
			std::cout << this->Elem[l] << ",";
		else std::cout << this->Elem[l];
	std::cout << "}" << std::endl << std::endl;
}

void Vector::SetVector(const int E) {
	this->Elem[this->i] = E;
	this->i++;
}

void Vector::AddVector(const Vector A) {
	for (int i = 0; i < A.i; i++) {
		SetVector(A.Elem[i]);
	}
}

void Vector::GetVectorI(int l, int i) {
	if (this->i < i)
		std::cout << "Too much" << std::endl;
	else {
		std::cout << "{";
		for (i; i < this->i || i < l; i++) {
			if (i != this->i - 1)
				std::cout << this->Elem[i] << ",";
			else std::cout << this->Elem[i];
		}
		std::cout << "}" << std::endl << std::endl;
	}
}

void Vector::Sort() {
	int temp;
	for (int i = 0; i < this->i; i++) {
		for (int j = 0; j < this->i - 1; j++) {
			if (this->Elem[j] > this->Elem[j + 1]) {
				temp = this->Elem[j];
				this->Elem[j] = this->Elem[j + 1];
				this->Elem[j + 1] = temp;
			}
		}
	}
}

int Vector::GetMax() {
	double res = this->Elem[0];
	int i;
	for (i = 0; i < this->i; ++i)
		if (isgreater(this->Elem[i], res) > 0)
			res = this->Elem[i];
	return res;
}

