import heapq

def a_star_search(graph, start, goal, h):
    open_list = []
    heapq.heappush(open_list, (0 + h[start], start))
    came_from = {}
    g_score = {node: float('inf') for node in graph}
    g_score[start] = 0
    
    while open_list:
        current_f, current = heapq.heappop(open_list)
        
        if current == goal:
            print("Goal Reached!")
            return
            
        for neighbor, weight in graph[current]:
            tentative_g = g_score[current] + weight
            if tentative_g < g_score[neighbor]:
                came_from[neighbor] = current
                g_score[neighbor] = tentative_g
                f_score = tentative_g + h[neighbor]
                heapq.heappush(open_list, (f_score, neighbor))
    
    print("Failure")

# Simplified graph structure for demo
# h is heuristic dictionary
