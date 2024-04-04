import math
import time

def is_prime(num):
    if num <= 1:
        return False
    elif num == 2:
        return True
    elif num % 2 == 0:
        return False
    else:
        sqrt_num = int(math.sqrt(num))
        for i in range(3, sqrt_num + 1, 2):
            if num % i == 0:
                return False
        return True

# Taking input from the user
number = int(input("Enter a number: "))

# Measuring time
start_time = time.time()

if is_prime(number):
    print(number, "is a prime number")
else:
    print(number, "is not a prime number")

end_time = time.time()
time_taken = (end_time - start_time) * 1000  # converting to milliseconds
print("Time taken:", round(time_taken, 2), "milliseconds")
