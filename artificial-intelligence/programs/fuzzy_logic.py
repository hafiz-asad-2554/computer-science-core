def fuzzy_union(setA, setB):
    return {k: max(setA.get(k, 0), setB.get(k, 0)) for k in setA.keys() | setB.keys()}

def fuzzy_intersection(setA, setB):
    return {k: min(setA.get(k, 0), setB.get(k, 0)) for k in setA.keys() | setB.keys()}

A = {"Young": 0.8, "Middle": 0.5, "Old": 0.2}
B = {"Young": 0.4, "Middle": 0.9, "Old": 0.1}

print("Union:", fuzzy_union(A, B))
print("Intersection:", fuzzy_intersection(A, B))
