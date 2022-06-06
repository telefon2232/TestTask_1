#include "algo.h"

namespace algo {

    int Algo::vowel_max_len(const std::size_t consonants_max, const std::string &s) const {
        int current_substring_len = 0;
        int max_substring_size = 0;
        int substring_consonants = consonants_max;
        int vowel_count = 0;
        for (auto & j : s) {
            if (vowelSet_.find(j) != vowelSet_.end()) {
                vowel_count++;
                current_substring_len++;
            } else {
                if (substring_consonants == 0) {
                    max_substring_size = std::max(max_substring_size, current_substring_len);
                    substring_consonants = consonants_max;
                    current_substring_len = 0;
                } else {
                    substring_consonants--;
                    current_substring_len++;
                }
            }
        }
        if (vowel_count <= 1) {
            max_substring_size = 0;
        } else if (!substring_consonants && vowelSet_.find(s.back()) != vowelSet_.end()) {
            max_substring_size = std::max(max_substring_size, current_substring_len);
        }
        return max_substring_size;
    }
}
