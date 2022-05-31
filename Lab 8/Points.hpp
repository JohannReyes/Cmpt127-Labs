#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <cstddef>

/* Points.hpp */

class Point {
	
private:
	double x;
	double y;
	double z;

public:

	Point();

	double getX();
	double getY();
	double getZ();

	void setX( double someX );
	void setY( double someY );
	void setZ( double someZ );
};

class Points {

private:
	size_t len;
	size_t reserved;
	Point points;

public:

	Points();

	~Points();
	
	int point_array_append(Point p);

	int point_array_remove(unsigned int i);
};