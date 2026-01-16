/*
 * Exercise 19:
 * Write a C program to implement a neural network using
 * user-defined values.
 */

#include <stdio.h>

// Neural network with user-defined values
int activate(float net) { return (net >= 0) ? 1 : 0; }

int main() {
  int num_inputs;
  float inputs[10];
  float weights[10];
  float bias;
  float net = 0.0;
  int output;

  printf("=== Neural Network with User-Defined Values ===\n");

  printf("Enter number of inputs (max 10): ");
  scanf("%d", &num_inputs);

  if (num_inputs > 10 || num_inputs < 1) {
    printf("Invalid number of inputs!\n");
    return 1;
  }

  printf("\nEnter %d input values:\n", num_inputs);
  for (int i = 0; i < num_inputs; i++) {
    printf("Input %d: ", i + 1);
    scanf("%f", &inputs[i]);
  }

  printf("\nEnter %d weight values:\n", num_inputs);
  for (int i = 0; i < num_inputs; i++) {
    printf("Weight %d: ", i + 1);
    scanf("%f", &weights[i]);
  }

  printf("\nEnter bias: ");
  scanf("%f", &bias);

  // Calculate net input
  for (int i = 0; i < num_inputs; i++) {
    net += inputs[i] * weights[i];
  }
  net += bias;

  output = activate(net);

  printf("\n--- Neural Network Computation ---\n");
  printf("Inputs:  [");
  for (int i = 0; i < num_inputs; i++) {
    printf("%.2f", inputs[i]);
    if (i < num_inputs - 1)
      printf(", ");
  }
  printf("]\n");

  printf("Weights: [");
  for (int i = 0; i < num_inputs; i++) {
    printf("%.2f", weights[i]);
    if (i < num_inputs - 1)
      printf(", ");
  }
  printf("]\n");

  printf("Bias:    %.2f\n", bias);
  printf("Net Input: %.2f\n", net);
  printf("Output:  %d\n", output);

  return 0;
}
