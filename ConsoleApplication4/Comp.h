#pragma once
class Complex {
private:
	double re;
	double im;

public:
	Complex(double _re, double _im) {
		re = _re;
		im = _im;
	}

	friend Complex operator+ (const Complex left, const Complex right) {
		return Complex(left.re + right.re, left.im + right.im);
	}

	friend Complex operator+ (const Complex left, const double right) {
		return Complex(left.re + right, left.im);
	}

	friend Complex operator- (const Complex left, const Complex right) {
		return Complex(left.re - right.re, left.im - right.im);
	}

	friend Complex operator- (const Complex left, const double right) {
		return Complex(left.re - right, left.im);
	}

	friend Complex operator* (const Complex left, const Complex right) {
		return Complex(left.re * right.re - lefi.im * right.im, left.im * right.re + left.re * right.im);
	}

	friend Complex operator* (const Complex left, const double right) {
		return Complex(left.re * right, left.im * right);
	}

	friend Complex operator/ (const Complex left, const Complex right) {
		return Complex((left.re * right.re - lefi.im * right.im) / (right.re * right.re + right.im * right.im), ((left.im * right.re + left.re * right.im) / (right.re * right.re + right.im * right.im));
	}

	friend Complex operator/ (const Complex left, const double right) {
		return Complex(left.re / right, left.im / right);
	}

	void print() {
		if (im > 0)
			cout << re << " + " << im << "i" << endl;
		else if (im == 0)
			cout << re << endl;
		else
			cout << re << " - " << im * -1 << "i" << endl;
	}
};