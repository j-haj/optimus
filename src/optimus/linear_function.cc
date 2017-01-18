
#include "optimus/linear_function.h"

using linear_function = optimus::functions::linear_function

template <typename Dtype>
Dtype linear_function<Dtype>::evaluate(const std::vector<Dtype>& x) {
    
    assert(x.size() == input_dimension_);
    Dtype result{0};
    for (int i = 0; i < input_dimension_; i++) {
        result += x[i] * weights_[i];
    }
    return result;
}

template <typename Dtype>
Dtype linear_function<Dtype>::evaluate(std::initializer_list<Dtype> l) {
    // Check input size
    assert(l.end() - l.begin() + 1 == input_dimension_);

    Dtype result{0};
    int idx = 0;
    for (std::vector<Dtype>::iterator it = l.begin(); it < l.end(); it++) {
        result += *it * weights_[idx];
    }
    return result;
}
