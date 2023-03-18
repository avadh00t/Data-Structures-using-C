typedef struct complex {
	double real, img;
};

complex addComplex(complex a, complex b){
	complex res;
	res.real = a.real + b.real;
	res.img = a.img + b.img;
	return res;
}

complex subComplex(complex a, complex b){
	complex res;
	res.real = a.real - b.real;
	res.img = a.img - b.img;
	return res;
}

complex mulComplex(complex a, complex b){
	complex res;
	res.real = a.real * b.real - a.img * b.img;
	res.img = a.real * b.img + b.real * a.img;
	return res;
}

complex divComplex(complex a, complex b){
	complex res;
	res.real = (a.real * b.real + a.img * b.img) / (b.real * b.real + b.img * b.img);
	res.img = (a.img * b.real - a.real * b.img) / (b.real * b.real + b.img * b.img);
	return res;
}

void displayComplex(complex c){
	if(c.img > 0){
		cout << c.real << "+" << c.img << "i";
	} else if(c.img < 0) {
		cout << c.real << c.img << "i";
	} else {
		cout << c.real;
	}
}