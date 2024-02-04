#include "Triangle.h"
#include <iostream>
#include <math.h>

Triangle::Triangle() {
	width = 0;
	height = 0;
}

Triangle::Triangle(double w, double h) {
	width = w;
	height = h;
}

Triangle::~Triangle() {
	std::cout << "Deleting Triangle object.";
}

void Triangle::setWidth(double w) {
	width = w;

}

void Triangle::setHeight(double h) {
	height = h;
}

double Triangle::getWidth() {
	return width;
}

double Triangle::getHeight() {
	return height;
}

double Triangle::get_Perimeter() {
	// perimeter = a + b + b + a

	return height + width + sqrt(pow(height, 2) + pow(width, 2));
}

double Triangle::get_Area() {

	return (height * width)/2 ;
}

void Triangle::resize(double factor) {
	width = width * factor;
	height *= factor;
}
