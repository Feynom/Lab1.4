#pragma once
#include <iostream>

using namespace std;

class Dot
{
	double x, y;
public:
	friend class Rectangle;

	void SetX(double x);
	void SetY(double y);

	double GetX() const;
	double GetY() const;

	void Init(double x, double y);
	void Read();
	void Display();
};

class Rectangle
{
	Dot a, b, c, d;
public:
	void SetA(double x, double y);
	void SetB(double x, double y);
	void SetC(double x, double y);
	void SetD(double x, double y);

	Dot GetDotA() const;
	Dot GetDotB() const;
	Dot GetDotC() const;
	Dot GetDotD() const;

	void InitRectangle(Dot a, Dot b, Dot c, Dot d);
	void ReadRectangle();
	void DisplayRectangle();

	void MoveX(double value);
	void MoveY(double value);

	void ChangeWidth(double value);
	void ChangeHeight(double value);

	//Rectangle CommonPartRectangle(Rectangle A, Rectangle B) const;
	//Rectangle MinRectangle(Rectangle A, Rectangle B) const;

	//double DotDistance(Dot A, Dot B) const;
	//Dot DotPairs(Rectangle A, Rectangle B) const;
	//int IndexMaxDotDistance(Dot **arr) const;
};