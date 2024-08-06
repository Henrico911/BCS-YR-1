def generate_even_numbers(n):
    """Generate even numbers up to n."""
    even_numbers = [i for i in range(2, n + 1, 2)]
    return even_numbers

# Example usage:
n = 30  # You can change this value to generate even numbers up to a different number
result = generate_even_numbers(n)
print(result)
