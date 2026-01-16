/*
 * Exercise 11:
 * Write a C program to demonstrate how bias affects the output
 * of a neuron.
 */

#include <stdio.h>

// Demonstrate how bias affects neuron output
int main() {
  float x1 = 0.5, x2 = 0.5;
  float w1 = 1.0, w2 = 1.0;
  float bias;
  float net;
  int output;

  printf("=== Effect of Bias on Neuron Output ===\n");
  printf("Fixed inputs: x1 = %.2f, x2 = %.2f\n", x1, x2);
  printf("Fixed weights: w1 = %.2f, w2 = %.2f\n\n", w1, w2);

  printf("Testing different bias values:\n");
  printf("Bias  | Net Input | Output\n");
  printf("------|-----------|-------\n");

  float biases[] = {-2.0, -1.0, -0.5, 0.0, 0.5, 1.0, 2.0};
  int num_biases = 7;

  for (int i = 0; i < num_biases; i++) {
    bias = biases[i];
    net = (x1 * w1) + (x2 * w2) + bias;
    output = (net >= 0) ? 1 : 0;
    printf("%5.1f | %9.2f |   %d\n", bias, net, output);
  }

  printf("\n--- User Test ---\n");
  printf("Enter your own bias value: ");
  scanf("%f", &bias);

  net = (x1 * w1) + (x2 * w2) + bias;
  output = (net >= 0) ? 1 : 0;

  printf("\nWith bias = %.2f:\n", bias);
  printf("Net Input = %.2f\n", net);
  printf("Output = %d\n", output);
  printf("\nBias shifts the activation threshold!\n");

  return 0;
}
