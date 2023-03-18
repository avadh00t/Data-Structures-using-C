typedef struct rational{
	int n,d;
};

rational getrational()
{
	rational t;
	cout<< "\nEnter Numerator:";
	cin>> t.n;
	t.d = 0;
	while(t.d == 0)
	{
		cout<< "Enter Denominator:";
		cin>> t.d;
	}
	return t;
}

void printrational(rational t){
	cout<< t.n << "/" << t.d;
}

rational addrational(rational r1, rational r2) {
	rational t;
	if(r1.d == r2.d){
		t.n = r1.n + r2.n;
		t.d = r1.d;
	}
	else {
		t.n = r1.n * r2.d + r1.d * r2.n;
		t.d = r1.d * r2.d;
	}
	return t;
}

rational multirational(rational r1, rational r2) {
	rational t;
	t.n = r1.n * r2.n;
	t.d = r1.d * r2.d;
	return t;
}

rational subrational(rational r1, rational r2) {
	rational t;
	if(r1.d < 0 || r2.d <0){
		t.n = (r1.n * r2.d) + (r1.d * r2.n);
		t.d = r1.d * r2.d;
	}
	else{
		t.n = (r1.n * r2.d) - (r1.d * r2.n);
		t.d = r1.d * r2.d;
	}
	return t;
}

rational divrational(rational r1, rational r2){
	rational t;
	t.n = r1.n * r2.d;
	t.d = r1.d * r2.n;
	return t;
}