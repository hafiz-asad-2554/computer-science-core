from collections import deque

def water_jug_bfs(capacity_x, capacity_y, goal):
    queue = deque([(0, 0, [])]) # x, y, path
    visited = set()
    
    while queue:
        x, y, path = queue.popleft()
        if x == goal or y == goal:
            for step in path: print(step)
            print(f"Final State: ({x}, {y})")
            return
            
        if (x, y) in visited: continue
        visited.add((x, y))
        
        # Possible actions
        next_states = [
            (capacity_x, y, path + ["Fill X"]),
            (x, capacity_y, path + ["Fill Y"]),
            (0, y, path + ["Empty X"]),
            (x, 0, path + ["Empty Y"]),
            (0, x + y, path + ["Pour X->Y"]) if x + y <= capacity_y else (x - (capacity_y - y), capacity_y, path + ["Pour X->Y"]),
            (x + y, 0, path + ["Pour Y->X"]) if x + y <= capacity_x else (capacity_x, y - (capacity_x - x), path + ["Pour Y->X"])
        ]
        
        for state in next_states:
            queue.append(state)

if __name__ == "__main__":
    water_jug_bfs(4, 3, 2)
