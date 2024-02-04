#pragma once
class Triangle
{
private:
	double width;
	double height;


public:
	Triangle();
	Triangle(double w,double h);

	//destructor
	~Triangle();
	
	//Mutators
	void setWidth(double w);
	void setHeight(double h);

	//accessor
		
	double getWidth();
	double getHeight();

	//getPerimeter
	double get_Perimeter();

	//getArea
	double get_Area();

	//Resize
	void resize(double factor);

};