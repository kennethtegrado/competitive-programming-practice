import sys

inputs = sys.stdin.read().splitlines()

c = 1
ln = 0

while True:
    n, f = map(int, inputs[ln].split(" "))
    ln += 1
    
    if not n and not f:
        break

    sum = 0
    for i in range(n):
        sum += int(inputs[ln])
        ln += 1

    print(f"Bill #{c} costs {sum}: each friend should pay {sum // f}\n")
    c += 1

