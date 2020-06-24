#include <iostream>
using namespace std;

class polygon
{
protected:
	int height;
	int width;
public:
	void setVals(int a, int b){
		height = a;
		width = b;
	}

};

class rect : public polygon
{
	
public:
	int area(){
		return height * width;
	}
	
};


int main()
{
	
	rect r;
	r.setVals(2,4);
	cout<<r.area()<<endl;
	
	return 0;
}