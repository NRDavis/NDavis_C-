#ifndef ADVMATH_H
#define ADVMATH_H "advmath.h"



// absolute value function
template<typename T>
T abs(T a){
	if(a < (T) 0){
		return -a;
	}
	else{
		return a;
	}
}

// factorial function
int factorial(int a){
	int factorial = 1;
	int tmp = a;
	while(tmp > 1){
		factorial *= tmp;
		tmp -= 1;
	}	
	return factorial;
}

template<typename T>
T dot(T a[3], T b[3]){
	T dot_product = 0;

	int i;
	for(i = 0; i < 3; i++){
		dot_product = dot_product + (a[i])*(b[i]);
	}
	return dot_product;		
}

// Multi-dimensional Dot product
template<typename T>
T dotX(T a[], T b[], int len){
	T dot_product;
	int i;
	for(i = 0; i < len; i++){
		dot_product = dot_product + (a[i])*(b[i]);
	}
	return dot_product;
}


template<typename T>
T* cross(T a[3], T b[3]){
	T *vector = new T[3];
	vector[0] = a[1]*b[2] - a[2]*b[1];
	vector[1] = -(a[0]*b[2] - a[2]*b[0]);
	vector[2] = a[0]*b[1] - a[1]*b[0];
	return vector;
}

// Newton's squareroot method
template<typename T>
double sqrt(T a){
	double xn = 1;			// initialized to one
	double tmp = xn;
	double delta = 1;		// initialized to not zero
	while(delta > 0){
		tmp = xn;
		xn = (0.5)*(xn + ((double) a) / xn);
		delta = abs(xn - tmp) / tmp;
		if(delta == 0) return xn;
	}
	return xn;
}

double exp(double base, int power){
	double val = base;
	int i = power;
	if(power == 0){
		return 1;
	}
	while(i > 1){
		val = val*base;
		i -= 1;
	}	
	return val;
}


template<typename T>
T modulus(T num, T div){
	T tmpN = num;
	T tmpD = div;

	if(div < 0){
		tmpD = -div;
	}	
	else{
		tmpD = div;
	}
	
	if(tmpN > tmpD){
		while(tmpN > tmpD){
			tmpN -= tmpD;
		}
		return tmpN;
	}
	else{
		return tmpN;
	}

}

// series approximation of sin(x)
double sin(double x){
	double adjx = x;	// typecast to double
	double val = 0;
	int i = 1;
	// -sin(x) = sin(-x)
	if(adjx < 0){
		adjx = -adjx;	// negate if negative
	}

	adjx = modulus(adjx, 6.283185307);
	
	while(i < 6){
		val += (exp(adjx,i)*exp(-1,i-1) / (double) factorial(i));
		i+=1;
	}
	return val;
}


// series approximation of atan(x)
double atan(double x){
	int i = 1;
	double atan = 0;
	if(x > 1.570796) x = modulus(x, 1.570796);
	while(i<7){
		atan = atan + ( exp(x,i)/i )*( exp(-1,i-1) );
		//printf("\t%d\t%f\t%f\n",i, (exp(x,i)/i),exp(-1,i-1));
		double f = ( exp(x,i+1)/ (i+1) )*( exp(-1,i) ) - ( exp(x,i)/i )*( exp(-1,i-1) );
		printf("\t%d:\tatan(%f) = %f\tdiff: %f\n", i, x, atan, f);
		i += 1;
	}
	double z = exp(-1, 2) * 5;
	printf("%f\n\n", z);
	return atan;
}

#endif
