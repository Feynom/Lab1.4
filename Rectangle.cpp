#pragma once
#include "Rectangle.h"

void Dot::SetX(double x) { this->x = x; }
void Dot::SetY(double y) { this->y = y; }

double Dot::GetX() const { return x; }
double Dot::GetY() const { return y; }

void Dot::Init(double x, double y)
{
	this->x = x;
	this->y = y;
}
void Dot::Read()
{
	cout << "\nX = "; cin >> x;
	cout << "Y = "; cin >> y;
}
void Dot::Display()
{
	cout << "X = " << GetX() << endl;
	cout << "Y = " << GetY() << endl;
}

void Rectangle::SetA(double x, double y)
{
	a.SetX(x);
	a.SetY(y);
}
void Rectangle::SetB(double x, double y)
{
	b.SetX(x);
	b.SetY(y);
}
void Rectangle::SetC(double x, double y)
{
	c.SetX(x);
	c.SetY(y);
}
void Rectangle::SetD(double x, double y)
{
	d.SetX(x);
	d.SetY(y);
}

Dot Rectangle::GetDotA() const { return a; }
Dot Rectangle::GetDotB() const { return b; }
Dot Rectangle::GetDotC() const { return c; }
Dot Rectangle::GetDotD() const { return d; }

void Rectangle::InitRectangle(Dot a, Dot b, Dot c, Dot d)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
}
void Rectangle::ReadRectangle()
{
	cout << endl << endl;
	cout << "B                                  C" << endl;
	cout << "  --------------------------------" << endl;
	cout << " |                                |" << endl;
	cout << " |                                |" << endl;
	cout << " |                                |" << endl;
	cout << " |                                |" << endl;
	cout << " |                                |" << endl;
	cout << " |                                |" << endl;
	cout << "  --------------------------------" << endl;
	cout << "A                                  D" << endl;

	cout << endl;
	cout << "\nDot A" << endl;
	a.Read();
	cout << "\nDot B" << endl;
	b.Read();
	cout << "\nDot C" << endl;
	c.Read();
	cout << "\nDot D" << endl;
	d.Read();
}
void Rectangle::DisplayRectangle()
{
	cout << "\nDot A" << endl;
	a.Display();
	cout << "\nDot B" << endl;
	b.Display();
	cout << "\nDot C" << endl;
	c.Display();
	cout << "\nDot D" << endl;
	d.Display();
}

void Rectangle::MoveX(double value)
{
	a.SetX(a.GetX() + value);
	b.SetX(b.GetX() + value);
	c.SetX(c.GetX() + value);
	d.SetX(d.GetX() + value);
}
void Rectangle::MoveY(double value)
{
	a.SetY(a.GetY() + value);
	b.SetY(b.GetY() + value);
	c.SetY(c.GetY() + value);
	d.SetY(d.GetY() + value);
}

void Rectangle::ChangeWidth(double value)
{
	double HalfValue = value / 2.;
	a.SetX(a.GetX() - HalfValue);
	b.SetX(b.GetX() - HalfValue);
	c.SetX(c.GetX() + HalfValue);
	d.SetX(d.GetX() + HalfValue);
}
void Rectangle::ChangeHeight(double value)
{
	double HalfValue = value / 2.;
	a.SetY(a.GetY() - HalfValue);
	b.SetY(b.GetY() + HalfValue);
	c.SetY(c.GetY() + HalfValue);
	d.SetY(d.GetY() - HalfValue);
}

//Rectangle Rectangle::MinRectangle(Rectangle A, Rectangle B) const
//{
//
//	Dot A_t, B_t;
//	Dot Arr[][] = DotPairs(A, B);
//	
//
//}
//
//double Rectangle::DotDistance(Dot A, Dot B) const
//{
//	return sqrt(pow((B.GetX() - A.GetX()), 2) + pow((B.GetY() - A.GetY()), 2));
//}
//Dot Rectangle::DotPairs(Rectangle A, Rectangle B) const
//{
//	Dot Arr[][2] =     {{A.GetDotA(), B.GetDotA() },
//					{A.GetDotA(), B.GetDotB() },
//					{A.GetDotA(), B.GetDotC() },
//					{A.GetDotA(), B.GetDotD() },
//
//					{A.GetDotB(), B.GetDotA() },
//					{A.GetDotB(), B.GetDotB() },
//					{A.GetDotB(), B.GetDotC() },
//					{A.GetDotB(), B.GetDotD() },
//
//					{A.GetDotC(), B.GetDotA() },
//					{A.GetDotC(), B.GetDotB() },
//					{A.GetDotC(), B.GetDotC() },
//					{A.GetDotC(), B.GetDotD() },
//
//					{A.GetDotD(), B.GetDotA() },
//					{A.GetDotD(), B.GetDotB() },
//					{A.GetDotD(), B.GetDotC() },
//					{A.GetDotD(), B.GetDotD() } };		
//
//	return **Arr;
//}
//int Rectangle::IndexMaxDotDistance(Dot **arr) const
//{
//	double MaxValue = DotDistance(arr[0][0], arr[0][1]);
//
//	for (int i = 0; i < 16; i++)
//	{
//		if (MaxValue < DotDistance(arr[i][0], arr[i][1]))
//			MaxValue = DotDistance(arr[i][0], arr[i][1]);
//	}
//	
//	int k;
//	for (k = 0; k < 16; k++)
//	{
//		if (MaxValue == DotDistance(arr[k][0], arr[k][1]))
//			break;
//	}
//	return k;
//}