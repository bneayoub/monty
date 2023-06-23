push 8
push 2
div
pall    # Output should be 4
push 5
div
pall    # Output should be 0 (4/5 -> 0 in integer division)
push 0
div     # This should cause an error for division by zero
pall
push 10
push 2
push 0
div     # This should cause an error for division by zero
pall
