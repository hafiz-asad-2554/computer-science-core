def min_max_scale(data):
    min_val = min(data)
    max_val = max(data)
    return [(x - min_val) / (max_val - min_val) for x in data]

print(min_max_scale([10, 20, 30, 40, 50]))
