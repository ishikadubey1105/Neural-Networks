/*
 * Exercise 9:
 * Write a C program to accept inputs, weights, and bias and
 * compute the neuron output.
 */

#include <stdio.h>

// Compute neuron output from inputs, weights, and bias
int computeNeuronOutput(float x1, float x2, float w1, float w2, float bias) {
  float net = (x1 * w1) + (x2 * w2) + bias;
  return (net >= 0) ? 1 : 0;
}

int main() {
  float x1, x2;
  float w1, w2;
  float bias;
  int output;

  printf("=== Neuron Output Computation ===\n");

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

  output = computeNeuronOutput(x1, x2, w1, w2, bias);

  printf("\n--- Computation Details ---\n");
  printf("x1 = %.2f, w1 = %.2f\n", x1, w1);
  printf("x2 = %.2f, w2 = %.2f\n", x2, w2);
  printf("bias = %.2f\n", bias);
  printf("\nNet = (x1 × w1) + (x2 × w2) + bias\n");
  printf("Net = (%.2f × %.2f) + (%.2f × %.2f) + %.2f\n", x1, w1, x2, w2, bias);
  printf("Net = %.2f\n", (x1 * w1) + (x2 * w2) + bias);
  printf("\nNeuron Output = %d\n", output);

  return 0;
}
