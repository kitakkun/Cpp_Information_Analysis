#include "NonLinearSolver.h"

double NonLinearSolver::secant(std::function<double(double)> f, double xInitial, double epsilon,
                               std::function<void(int, double)> onValueUpdate) {
    return 0;
}

double NonLinearSolver::newton(const std::function<double(double)>& f, const std::function<double(double)>& fd, double xInitial,
                               double epsilon, int maxStep, const std::function<void(int, double)>& onValueUpdate) {
    double x = xInitial;
    int step = 0;
    while(step < maxStep && std::abs(f(x)) > epsilon) {
        double xNext = x - f(x) / fd(x);
        onValueUpdate(step, xNext);
        x = xNext;
        step++;
    }
    return x;
}

double NonLinearSolver::bisection(std::function<double(double)> f, double aInitial, double bInitial, double epsilon,
                                  std::function<void(int, double, double)> onValueUpdate) {
    double a = aInitial;
    double b = bInitial;
    int step = 0;

    while(b - a > epsilon) {
        double c = (a + b) / 2;
        if (f(c) * f(a) < 0) b = c;
        else a = c;
        onValueUpdate(step, a, b);
        step++;
    }

    return (a + b) / 2;
}

double NonLinearSolver::regula_falsi(std::function<double(double)> f, double aInitial, double bInitial, double epsilon,
                                     std::function<void(int, double, double)> onValueUpdate) {
    return 0;
}
