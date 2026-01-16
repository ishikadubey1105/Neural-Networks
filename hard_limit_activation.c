/*
 * Exercise 15:
 * Write a C program to show the working of a hard-limit
 * activation function.
 */

#include <stdio.h>

// Hard-limit activation function
int hardLimit(float net) {
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

  printf("=== Hard-Limit Activation Function ===\n");
  printf("Function: f(x) = 1 if x >= 0, else 0\n\n");

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
  output = hardLimit(net);

  printf("\n--- Hard-Limit Activation ---\n");
  printf("Net Input = %.2f\n", net);

  if (net >= 0) {
    printf("Since %.2f >= 0\n", net);
    printf("Hard-Limit Output = %d\n", output);
  } else {
    printf("Since %.2f < 0\n", net);
    printf("Hard-Limit Output = %d\n", output);
  }

  // Demonstrate with various values
  printf("\n--- Hard-Limit Function Demonstration ---\n");
  printf("Net Value | Output\n");
  printf("----------|-------\n");
  float test_values[] = {-2.0, -1.0, -0.1, 0.0, 0.1, 1.0, 2.0};
  for (int i = 0; i < 7; i++) {
    printf("%9.1f |   %d\n", test_values[i], hardLimit(test_values[i]));
  }

  return 0;
}
