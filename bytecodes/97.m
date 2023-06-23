# This is a comment line
push 10  # This is an inline comment
push 20  # This is another inline comment
pall  # This should print 20 and 10

# Here is a line with only a comment
#

push 30  # Push another value onto the stack
pall  # This should print 30, 20, 10

 # A comment line with leading spaces

push 40  # Push another value onto the stack
pall  # This should print 40, 30, 20, 10
