/*
 * Exercise 16:
 * Implement a simple neural network that classifies inputs as
 * true or false.
 */

#include <stdio.h>

// Neural network that classifies inputs as true or false
int classifyBoolean(float x1, float x2, float w1, float w2, float bias) {
  float net = (x1 * w1) + (x2 * w2) + bias;
  return (net >= 0) ? 1 : 0; // 1 = True, 0 = False
}

int main() {
  float x1, x2;
  float w1, w2;
  float bias;
  int result;

  printf("=== Boolean Classifier Neural Network ===\n");
  printf("Output: 1 = True, 0 = False\n\n");

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

  result = classifyBoolean(x1, x2, w1, w2, bias);

  printf("\n--- Classification Result ---\n");
  printf("Inputs: [%.2f, %.2f]\n", x1, x2);
  printf("Net Input: %.2f\n", (x1 * w1) + (x2 * w2) + bias);
  printf("Classification: %s (value = %d)\n", result ? "TRUE" : "FALSE",
         result);

  return 0;
}
