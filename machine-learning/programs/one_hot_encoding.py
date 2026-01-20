def one_hot(data):
    unique = list(set(data))
    encoding = {}
    for i, val in enumerate(unique):
        vec = [0] * len(unique)
        vec[i] = 1
        encoding[val] = vec
    return [encoding[x] for x in data]

print(one_hot(["red", "blue", "red", "green"]))
