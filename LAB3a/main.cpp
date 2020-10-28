#include"Vector.h"
#include"Util.h"
#include <iostream>


int main() {
	Vector A;
	A.SetVector(10);
	A.SetVector(3);
	A.SetVector(4);
	Vector B;
	B.SetVector(6);
	A.AddVector(B);
	A.GetVector();
	A.GetVectorI(2, 2);
	A.Sort();
	A.GetVector();
	int E[] = { 1,2,3 };
	Vector C(3, E);
	C.GetVector();
	Vector D(1, 1);
	D.GetVector();
	std::cout << A.GetMax();
	return 0;

}