def hill_climbing(func, start=0, step=0.1):
    current = start
    while True:
        neighbor = current + step
        if func(neighbor) > func(current):
            current = neighbor
        else:
            return current

def my_func(x): return -(x-2)**2 + 10 # Peak at x=2

peak = hill_climbing(my_func)
print(f"Peak found at x={peak}")
