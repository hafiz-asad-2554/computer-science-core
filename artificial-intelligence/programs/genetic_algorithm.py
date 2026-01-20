import random

def genetic_algorithm(target):
    population = [''.join(random.choice("abcdefghijklmnopqrstuvwxyz ") for _ in range(len(target))) for _ in range(100)]
    
    for generation in range(1000):
        population.sort(key=lambda x: sum(1 for a, b in zip(x, target) if a != b))
        
        if population[0] == target:
            print(f"Generations: {generation}, Result: {population[0]}")
            break
            
        # Select best 10
        parents = population[:10]
        # Crossover / Reproduce
        population = parents + [p1[:len(p1)//2] + p2[len(p2)//2:] for p1 in parents for p2 in parents]
        # Mutation (simplified: just shuffle)
        
genetic_algorithm("hello world")
