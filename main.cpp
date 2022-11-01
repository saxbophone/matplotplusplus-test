#include <cmath>
#include <matplot/matplot.h>

int main() {
    auto x = matplot::linspace(0, 100);
    auto x_times_sqrt_x = matplot::transform(x, [](double x) { return sqrt(x) / x; });
    auto x_div_sqrt_x = matplot::transform(x, [](double x) { return x / sqrt(x); });
    auto avg = matplot::transform(x, [](double x) { return ((sqrt(x) / x) + (x / sqrt(x))) / 2; });
    matplot::hold(matplot::on);
    matplot::plot(x_times_sqrt_x)->display_name("√x/x");
    matplot::plot(x_div_sqrt_x)->display_name("x/√x");
    matplot::plot(avg)->display_name("avg");
    matplot::legend();
    matplot::show();
    return 0;
}
