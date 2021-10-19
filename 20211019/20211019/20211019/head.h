#ifndef HEAD_H
#define HEAD_H
class point {
public:
	point(float x, float y) :_x(x), _y(y) {
	}
	static float getlen(point a, point b) {
		float n1 = abs(a._x - b._x);
		float n2 = abs(a._y - b._y);
		return sqrtf(n1 *n1 + n2 *n2);
	}
private:
	float _x;
	float _y;
};

#endif
