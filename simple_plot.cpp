#include "matplotlibcpp.h"
namespace plt = matplotlibcpp;

int main(int argc, char const *argv[])
{
    /* code */
    plt::plot({1,2,3,4});
    plt::show();
    return 0;
}
