#include <string>
#include <set>

namespace algo {

    class Algo {
    private:
        std::set<char> vowelSet_ = {'a','e','i','o','u','A','E','I','O','U'};

    public:
        Algo() noexcept = default;

        int vowel_max_len(const std::size_t cont_max, const std::string & s) const;

        ~Algo() = default;
    };

} // algo
