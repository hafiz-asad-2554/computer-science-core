import math, random

def simulated_annealing(cost_func):
    temp = 1000
    current_state = random.uniform(-10, 10)
    
    while temp > 1:
        next_state = current_state + random.uniform(-1, 1)
        delta = cost_func(next_state) - cost_func(current_state)
        
        if delta < 0 or random.random() < math.exp(-delta / temp):
            current_state = next_state
            
        temp *= 0.99
    
    return current_state

# cost function (minimize x^2)
print("Minimizing x^2:", simulated_annealing(lambda x: x**2))
