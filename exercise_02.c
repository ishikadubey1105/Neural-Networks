/*
 * Exercise 2:
 * Write a C program to implement a single artificial neuron with
 * two inputs and one output.
 */

#include <stdio.h>

// Single artificial neuron with two inputs and one output
int main() {
  float input1, input2;
  float weight1, weight2;
  float bias;
  float net_input;
  int output;

  printf("=== Single Artificial Neuron ===\n");
  printf("Enter first input: ");
  scanf("%f", &input1);
  printf("Enter second input: ");
  scanf("%f", &input2);

  printf("Enter weight for input 1: ");
  scanf("%f", &weight1);
  printf("Enter weight for input 2: ");
  scanf("%f", &weight2);

  printf("Enter bias: ");
  scanf("%f", &bias);

  // Calculate net input
  net_input = (input1 * weight1) + (input2 * weight2) + bias;

  // Apply step activation
  output = (net_input >= 0) ? 1 : 0;

  printf("\n--- Neuron Computation ---\n");
  printf("Net Input = %.2f\n", net_input);
  printf("Output = %d\n", output);

  return 0;
}
