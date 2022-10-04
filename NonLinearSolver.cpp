#include "NonLinearSolver.h"

double NonLinearSolver::secant(std::function<double(double)> f, double xInitial, double epsilon,
                               std::function<void(int, double)> onValueUpdate) {
    return 0;
}

double NonLinearSolver::newton(std::function<double(double)> f, std::function<double(double)> fd, double xInitial,
                               double epsilon, int maxStep, std::function<void(int, double)> onValueUpdate) {
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
    return 0;
}

double NonLinearSolver::regula_falsi(std::function<double(double)> f, double aInitial, double bInitial, double epsilon,
                                     std::function<void(int, double, double)> onValueUpdate) {
    return 0;
}
