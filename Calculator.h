#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {

    public:
        Calculator();
        ~Calculator();

        double add(double a, double b);
        double subtract(double a, double b);
        double multiply(double a, double b);
        double divide(double a, double b);

        double power(double base, double exponent);
        double squareRoot(double value);

        double sine(double angle);
        double cosine(double angle);
        double tangent(double angle);

        double naturalLog(double value);
        double commonLog(double value);
        double exponential(double exponent);
};

#endif // CALCULATOR_H