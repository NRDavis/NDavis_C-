#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "trigonometry.h"

using namespace std;


int main(void)
{
	//cout<<"Hello world"<<endl;
	
	cout<<"0\t0\t"<<sin(0)<<endl;
	cout<<"pi/2\t1\t"<<sin(1.570796)<<endl;
	cout<<"pi\t0\t"<<sin(3.14159265359)<<endl;
	cout<<"3/2 pi\t-1\t"<<sin(4.71238898038)<<endl;
	cout<<"2 pi\t0\t"<<sin(6.28318530718)<<endl;
	
	cout<<"\nCosine"<<endl;
	cout<<"0\t1\t"<<cos(0)<<endl;
	cout<<"0\t0\t"<<cos(1.570796)<<endl;
	cout<<"0\t-1\t"<<cos(3.14159265359)<<endl;
	cout<<"0\t0\t"<<cos(4.71238898038)<<endl;
	cout<<"2 pi\t1\t"<<cos(6.28318530718)<<endl;
	return 0;
}
