#ifndef FUNCTION_H_
#define FUNCTION_H_


namespace optimus {

namespace functions {

template <typename Dtype>
class function {

    public:
        // Constructors/Destructors
        virtual funcion()=0;
        virtual ~function()=0;
        virtual function(const function& f)=0;
        virtual function& operator=(const function& f)=0;

        // Getters/Setters 
        void set_weights(std::vector<Dtype>& w) {
            weights_ = std::move(w);
        }

        std::vector<Dtype>& get_weights() {
            return weights_;
        }
       
       
        int get_dimension() { return weights_.size(); }

        // Instance Methods
        virtual Dtype evaluate(const std::vector<Dtype>& x) const=0;
        virtual std::vector<Dtype> gradient(const std::vector<Dtype& x) const=0;
        virtual void to_string()=0;

    private:
        std::vector<Dtype> weights_;
        int input_dimension_;
#endif // FUNCTION_H_
