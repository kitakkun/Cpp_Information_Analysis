#ifndef CPP_INFORMATION_ANALYSIS_NONLINEARSOLVER_H
#define CPP_INFORMATION_ANALYSIS_NONLINEARSOLVER_H

#include <functional>

class NonLinearSolver {
public:
    static double secant(std::function<double(double)> f, double xInitial, double epsilon, std::function<void(int ,double)> onValueUpdate);
    static double newton(const std::function<double(double)>& f, const std::function<double(double)>& fd, double xInitial, double epsilon, int maxStep, const std::function<void(int, double)>& onValueUpdate);
    static double bisection(std::function<double(double)> f, double aInitial, double bInitial, double epsilon, std::function<void(int, double, double)> onValueUpdate);
    static double regula_falsi(std::function<double(double)> f, double aInitial, double bInitial, double epsilon, std::function<void(int, double, double)> onValueUpdate);
};

#endif //CPP_INFORMATION_ANALYSIS_NONLINEARSOLVER_H
