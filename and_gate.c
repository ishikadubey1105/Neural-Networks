/*
 * Exercise 6:
 * Implement a neural network in C to perform the AND logic operation.
 */

#include <stdio.h>

// AND Gate using Neural Network
int andGate(int x1, int x2) {
  // Fixed weights and bias for AND operation
  float w1 = 1.0;
  float w2 = 1.0;
  float bias = -1.5;
  float net;

  net = (x1 * w1) + (x2 * w2) + bias;

  return (net >= 0) ? 1 : 0;
}

int main() {
  int input1, input2;
  int output;

  printf("=== AND Gate using Neural Network ===\n");
  printf("Fixed weights: w1 = 1.0, w2 = 1.0\n");
  printf("Fixed bias: -1.5\n\n");

  printf("Enter first input (0 or 1): ");
  scanf("%d", &input1);
  printf("Enter second input (0 or 1): ");
  scanf("%d", &input2);

  output = andGate(input1, input2);

  printf("\n--- AND Gate Result ---\n");
  printf("%d AND %d = %d\n", input1, input2, output);

  // Display truth table
  printf("\n--- Truth Table ---\n");
  printf("A | B | Output\n");
  printf("--|---|-------\n");
  for (int a = 0; a <= 1; a++) {
    for (int b = 0; b <= 1; b++) {
      printf("%d | %d |   %d\n", a, b, andGate(a, b));
    }
  }

  return 0;
}
