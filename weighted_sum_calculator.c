/*
 * Exercise 3:
 * Write a C program to calculate the weighted sum of two inputs
 * in a neural network.
 */

#include <stdio.h>

// Program to calculate weighted sum of two inputs
int main() {
  float input1, input2;
  float weight1, weight2;
  float weighted_sum;

  printf("=== Weighted Sum Calculator ===\n");
  printf("Enter first input: ");
  scanf("%f", &input1);
  printf("Enter second input: ");
  scanf("%f", &input2);

  printf("Enter weight for input 1: ");
  scanf("%f", &weight1);
  printf("Enter weight for input 2: ");
  scanf("%f", &weight2);

  // Calculate weighted sum
  weighted_sum = (input1 * weight1) + (input2 * weight2);

  printf("\n--- Calculation ---\n");
  printf("Input 1 × Weight 1 = %.2f × %.2f = %.2f\n", input1, weight1,
         input1 * weight1);
  printf("Input 2 × Weight 2 = %.2f × %.2f = %.2f\n", input2, weight2,
         input2 * weight2);
  printf("Weighted Sum = %.2f\n", weighted_sum);

  return 0;
}
