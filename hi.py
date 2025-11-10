try:
    num1 = float(input("Enter first number: "))
    num2 = float(input("Enter second number: "))
    print("Sum:", num1 + num2)
    print("Difference:", num1 - num2)
    print("Product:", num1 * num2)
    if num2 != 0:
        print("Quotient:", num1 / num2)
    else:
        print("Error: Division by zero is not allowed.")
except ValueError:
    print("Invalid input. Please enter valid numbers.")