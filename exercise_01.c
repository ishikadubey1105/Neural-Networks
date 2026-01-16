/*
 * Exercise 1:
 * Implement a simple neural network in C that takes two inputs and
 * produces an output using a step activation function.
 */

#include <stdio.h>

// Step activation function
int stepActivation(float net) {
  if (net >= 0)
    return 1;
  else
    return 0;
}

int main() {
  float x1, x2;
  float w1, w2;
  float bias;
  float net;
  int output;

  printf("=== Simple Neural Network with Step Activation ===\n");
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

  net = (x1 * w1) + (x2 * w2) + bias;
  output = stepActivation(net);

  printf("\nWeighted Sum (Net Input) = %.2f", net);
  printf("\nNeuron Output = %d\n", output);

  return 0;
}
