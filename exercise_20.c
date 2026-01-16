/*
 * Exercise 20:
 * Write a C program to display the final output of a neuron
 * after activation.
 */

#include <stdio.h>

// Step activation function
int stepActivation(float net) { return (net >= 0) ? 1 : 0; }

int main() {
  float x1, x2;
  float w1, w2;
  float bias;
  float net_input;
  int activated_output;

  printf("=== Display Final Output After Activation ===\n");

  printf("Enter input x1: ");
  scanf("%f", &x1);
  printf("Enter input x2: ");
  scanf("%f", &x2);

  printf("Enter weight w1: ");
  scanf("%f", &w1);
  printf("Enter weight w2: ");
  scanf("%f", &w2);

  printf("Enter bias: ");
  scanf("%f", &bias);

  // Compute net input
  net_input = (x1 * w1) + (x2 * w2) + bias;

  // Apply activation function
  activated_output = stepActivation(net_input);

  printf("\n=== Neuron Processing ===\n");
  printf("Inputs:        [%.2f, %.2f]\n", x1, x2);
  printf("Weights:       [%.2f, %.2f]\n", w1, w2);
  printf("Bias:          %.2f\n", bias);

  printf("\n--- Before Activation ---\n");
  printf("Net Input (raw): %.2f\n", net_input);

  printf("\n--- After Activation ---\n");
  printf("Activation Function: Step (threshold at 0)\n");
  printf("Final Activated Output: %d\n", activated_output);

  if (activated_output == 1)
    printf("\n(Neuron FIRED - output signal sent)\n");
  else
    printf("\n(Neuron did NOT fire - no output signal)\n");

  return 0;
}
