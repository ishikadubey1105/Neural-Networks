/*
 * Exercise 4:
 * Implement a C program to demonstrate a threshold (step)
 * activation function.
 */

#include <stdio.h>

// Threshold (Step) Activation Function
int thresholdActivation(float net, float threshold) {
  if (net >= threshold)
    return 1;
  else
    return 0;
}

int main() {
  float net_input;
  float threshold;
  int output;

  printf("=== Threshold (Step) Activation Function ===\n");
  printf("Enter net input value: ");
  scanf("%f", &net_input);

  printf("Enter threshold value: ");
  scanf("%f", &threshold);

  output = thresholdActivation(net_input, threshold);

  printf("\n--- Activation Function ---\n");
  printf("Net Input = %.2f\n", net_input);
  printf("Threshold = %.2f\n", threshold);
  printf("Output = %d\n", output);

  if (output == 1)
    printf("(Net input >= Threshold: Neuron activated)\n");
  else
    printf("(Net input < Threshold: Neuron not activated)\n");

  return 0;
}
