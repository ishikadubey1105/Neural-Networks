/*
 * Exercise 12:
 * Implement a simple neural network in C without training
 * (fixed weights).
 */

#include <stdio.h>

// Simple Neural Network without training (fixed weights)
int main() {
  // Fixed weights and bias (no training)
  float w1 = 0.7;
  float w2 = 0.3;
  float bias = -0.5;

  float x1, x2;
  float net;
  int output;

  printf("=== Neural Network with Fixed Weights (No Training) ===\n");
  printf("Fixed parameters:\n");
  printf("Weight 1 (w1) = %.2f\n", w1);
  printf("Weight 2 (w2) = %.2f\n", w2);
  printf("Bias = %.2f\n\n", bias);

  printf("Enter input x1: ");
  scanf("%f", &x1);
  printf("Enter input x2: ");
  scanf("%f", &x2);

  net = (x1 * w1) + (x2 * w2) + bias;
  output = (net >= 0) ? 1 : 0;

  printf("\n--- Network Computation ---\n");
  printf("Net = (%.2f × %.2f) + (%.2f × %.2f) + %.2f\n", x1, w1, x2, w2, bias);
  printf("Net = %.2f\n", net);
  printf("Output = %d\n", output);
  printf("\n(Note: Weights are fixed, not learned through training)\n");

  return 0;
}
