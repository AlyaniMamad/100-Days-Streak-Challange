while True:
    print("Available bitwise operators: & (AND), | (OR), ^ (XOR), ~ (NOT), << (left shift), >> (right shift)")
    operator = input("Enter bitwise operator (or 'exit' to quit): ")

    if operator.lower() == 'exit':
        break

    if operator not in ['&', '|', '^', '~', '<<', '>>']:
        print("Invalid operator. Please try again.")
        continue

    if operator not in ['~', '<<', '>>']:
        operand1 = int(input("Enter first operand: "))
        operand2 = int(input("Enter second operand: "))

        if operator == '&':
            result = operand1 & operand2
        elif operator == '|':
            result = operand1 | operand2
        elif operator == '^':
            result = operand1 ^ operand2
    else:
        operand = int(input("Enter operand: "))

        if operator == '~':
            result = ~operand
        elif operator == '<<':
            shift_amount = int(input("Enter shift amount: "))
            result = operand << shift_amount
        elif operator == '>>':
            shift_amount = int(input("Enter shift amount: "))
            result = operand >> shift_amount

    print("Result:", result)
