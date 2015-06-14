#include <stdio.h>
#include <ctype.h>
#include <math.h>

double atof(char a[])
{
	double result = 0.0f;
	double rd = 0.0f;
	double rf = 0.0f;
	double rfp = 0.1;
	int re = 0;
	int i = 0;
	int signd, signe;

	//escape blank space
	while (a[i] == ' ' && a[i] != '\0')
	{
		i++;
	}

	//
	if (a[i] == '-') {
		signd = -1;
		i++;
	} else {
		signd = 1;
	}
	while (a[i] != '\0')
	{
		if (isdigit(a[i])) {
			rd += rd * 10 + (a[i] - '0') ;
			i++;
		} else if (a[i] == '.') {
			i++;
			break;
		} else {
			return result; // bad char
		}
	}

	//
	while (a[i] != '\0')
	{
		if (isdigit(a[i])) {
			rf += (a[i] - '0') * rfp;
			rfp *= 0.1;
			i++;
		} else if (a[i] == 'e') {
			i++;
			break;
		} else {
			return result; //bad char
		}
	}

	//
	if (a[i] == '-') {
		signe = -1;
		i++;
	} else {
		signe = 1;
	}
	while (a[i] != '\0') 
	{
		if (isdigit(a[i])) {
			re += re * 10 + (a[i] - '0');
			i++;
		} else { //bad chars
			return result;
		}
	}
	re = signe * re;

	result = signd * (rd + rf) * pow(10, re);

	return result;
}

int main()
{
	printf("%f\n", atof("1.23e4"));

	return 0;
}