def generate_primes(n):
    """Generate prime numbers up to n using the Sieve of Eratosthenes."""
    primes = []
    is_prime = [True] * (n + 1)
    is_prime[0] = is_prime[1] = False  # 0 and 1 are not prime numbers

    for i in range(2, int(n**0.5) + 1):
        if is_prime[i]:
            primes.append(i)
            for j in range(i*i, n+1, i):
                is_prime[j] = False

    for i in range(max(2, int(n**0.5) + 1), n + 1):
        if is_prime[i]:
            primes.append(i)

    return primes

# Example usage:
n = 30  # You can change this value to generate primes up to a different number
result = generate_primes(n)
print(result)
