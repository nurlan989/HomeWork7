#pragma once

#include <list>
#include <iostream>
#include <fstream>
#include <complex>


template<class T>
class Container : public std::list<T>
{
public:
	Container() = default;

	Container(std::initializer_list<T> _list) : std::list<T>(_list) {};

	Container& Move(Container<T>&& left, Container<T>&& right)
	{
		return left = std::move(right);
	}
};

class complexDigit 
{
	double re = 0;
	double im = 0;

public:
	
	complexDigit() = default;
	complexDigit(double r, double i) : re(r), im(i) { }
	
	friend std::ostream& operator<<(std::ostream& out, const complexDigit& num)
	{
		return out << num.re << ", " << num.im;
	}

	complexDigit&& operator+(complexDigit&& other)
	{
		double rhs = std::move(this->re + other.re);
		double lhs = std::move(this->im + other.im);
		this->re = 0;
		other.re = 0;
		this->im = 0;
		other.im = 0;
		return complexDigit(rhs, lhs);
	}

	complexDigit&& operator-(complexDigit&& other)
	{
		double rhs = std::move(this->re - other.re);
		double lhs = std::move(this->im - other.im);
		this->re = 0;
		other.re = 0;
		this->im = 0;
		other.im = 0;
		return complexDigit(rhs, lhs);
	}
	
};

