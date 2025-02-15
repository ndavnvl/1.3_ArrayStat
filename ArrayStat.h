#pragma once

#include <cstdlib>
#include <vector>


class ArrayStat {
private:
	std::vector<int> sorted;
public:
    explicit ArrayStat(const char *file_name);

    int max() const;
    int min() const;

    double mean() const;
    double rms() const;

    size_t countLarger(int el) const;
    void print() const;
};
