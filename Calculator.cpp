#include "Calculator.h"
#include <cmath>
using namespace std;

Calculator::Calculator() {}
Calculator::~Calculator() {}

double Calculator::add(double a, double b) {
    return a+b;
}

double Calculator::subtract(double a, double b) {
    return a-b;
}

double Calculator::multiply(double a, double b) {
    return a*b;
}

double Calculator::divide(double a, double b) {
    return a/b;
}

double Calculator::power(double base, double exponent) {
    return pow(base, exponent);
}

double Calculator::squareRoot(double value) {
    return sqrt(value);
}

double Calculator::sine(double angle) {
    return sin(angle * M_PI / 180.0); // Convert degrees to radians
}

double Calculator::cosine(double angle) {
    return cos(angle * M_PI / 180.0); // Convert degrees to radians
}

double Calculator::tangent(double angle) {
    return tan(angle * M_PI / 180.0); // Convert degrees to radians
}

double Calculator::naturalLog(double value) {
    return log(value);
}

double Calculator::commonLog(double value) {
    return log10(value);
}

double Calculator::exponential(double exponent) {
    return exp(exponent);
}
