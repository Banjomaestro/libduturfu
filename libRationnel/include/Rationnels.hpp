#include <vector>
#include <iostream>

template <typename T> class Rationnels {
        
    public:
        T numerator;
        T denominator;
        Rationnels(float ratio);
        Rationnels(T deno, T nume);
        Rationnels<T> reverse();

        
};
template<typename T>
std::ostream& operator<< (std::ostream& stream, const Tableau<T>& v);
