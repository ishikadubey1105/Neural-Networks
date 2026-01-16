/*
 * Exercise 7:
 * Write a C program to implement the OR logic gate using a
 * single-layer neural network.
 */

#include <stdio.h>

// OR Gate using Single-Layer Neural Network
int orGate(int x1, int x2) {
  // Fixed weights and bias for OR operation
  float w1 = 1.0;
  float w2 = 1.0;
  float bias = -0.5;
  float net;

  net = (x1 * w1) + (x2 * w2) + bias;

  return (net >= 0) ? 1 : 0;
}

int main() {
  int input1, input2;
  int output;

  printf("=== OR Gate using Neural Network ===\n");
  printf("Fixed weights: w1 = 1.0, w2 = 1.0\n");
  printf("Fixed bias: -0.5\n\n");

  printf("Enter first input (0 or 1): ");
  scanf("%d", &input1);
  printf("Enter second input (0 or 1): ");
  scanf("%d", &input2);

  output = orGate(input1, input2);

  printf("\n--- OR Gate Result ---\n");
  printf("%d OR %d = %d\n", input1, input2, output);

  // Display truth table
  printf("\n--- Truth Table ---\n");
  printf("A | B | Output\n");
  printf("--|---|-------\n");
  for (int a = 0; a <= 1; a++) {
    for (int b = 0; b <= 1; b++) {
      printf("%d | %d |   %d\n", a, b, orGate(a, b));
    }
  }

  return 0;
}
