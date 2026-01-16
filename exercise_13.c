/*
 * Exercise 13:
 * Write a C program to display the intermediate net input of
 * a neuron.
 */

#include <stdio.h>

// Display intermediate net input of a neuron
int stepActivation(float net) { return (net >= 0) ? 1 : 0; }

int main() {
  float x1, x2;
  float w1, w2;
  float bias;
  float term1, term2;
  float net;
  int output;

  printf("=== Neuron with Intermediate Net Input Display ===\n");

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

  // Calculate intermediate values
  term1 = x1 * w1;
  term2 = x2 * w2;
  net = term1 + term2 + bias;
  output = stepActivation(net);

  printf("\n--- Intermediate Computation Steps ---\n");
  printf("Step 1: x1 × w1 = %.2f × %.2f = %.2f\n", x1, w1, term1);
  printf("Step 2: x2 × w2 = %.2f × %.2f = %.2f\n", x2, w2, term2);
  printf("Step 3: Sum = %.2f + %.2f = %.2f\n", term1, term2, term1 + term2);
  printf("Step 4: Add bias = %.2f + %.2f = %.2f\n", term1 + term2, bias, net);
  printf("\nIntermediate Net Input = %.2f\n", net);
  printf("Final Output (after activation) = %d\n", output);

  return 0;
}
