#ifndef LINEAR_FUNCTION_H_
#define LINEAR_FUNCTION_H_

namespace optimus {
namespace functions {

template <typename Dtype>
class linear_function(optimus::functions::function) {
    public:
        // Constructors/Destructors
        linear_function() : {}
        linear_function(const std::vector<Dtype>& w) : weights_{w}, 
            input_dimension_{w.size()} {}

        ~linear_function() {}

#endif // LINEAR_FUNCTION_H_
