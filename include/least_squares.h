/// @file least_squares.h
/// Compute a least squares regression

#ifndef LEAST_SQUARES_H
#define LEAST_SQUARES_H

/// @brief x, y Datapoints for least_squares regression
/// @param x The input values
/// @param y The output values
/// @param n The number of data points
typedef struct {
    /// The input values
    double *x;
    /// The output values
    double *y;
    /// The number of data points
    int n;
} Dataset;

/// @brief Read in some parameter data to the Dataset struct
/// @param filename Path to the file to read
/// @return A populated Dataset with our data points
Dataset read_data(const char *filename);

// TODO document these
/// @brief 
/// @param data 
/// @param slope 
/// @param intercept 
void solve_least_squares(const Dataset *data, double *slope, double *intercept);

/// @brief 
/// @param slope 
/// @param intercept 
void print_solution(double slope, double intercept);

#endif // LEAST_SQUARES_H
