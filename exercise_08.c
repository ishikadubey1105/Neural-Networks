/*
 * Exercise 8:
 * Implement a NOT gate using a neural network in C.
 */

#include <stdio.h>

// NOT Gate using Neural Network
int notGate(int x) {
  // Fixed weight and bias for NOT operation
  float w = -1.0;
  float bias = 0.5;
  float net;

  net = (x * w) + bias;

  return (net >= 0) ? 1 : 0;
}

int main() {
  int input;
  int output;

  printf("=== NOT Gate using Neural Network ===\n");
  printf("Fixed weight: w = -1.0\n");
  printf("Fixed bias: 0.5\n\n");

  printf("Enter input (0 or 1): ");
  scanf("%d", &input);

  output = notGate(input);

  printf("\n--- NOT Gate Result ---\n");
  printf("NOT %d = %d\n", input, output);

  // Display truth table
  printf("\n--- Truth Table ---\n");
  printf("Input | Output\n");
  printf("------|-------\n");
  printf("  0   |   %d\n", notGate(0));
  printf("  1   |   %d\n", notGate(1));

  return 0;
}
