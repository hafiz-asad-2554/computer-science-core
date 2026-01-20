def k_fold_split(data, k):
    fold_size = len(data) // k
    folds = []
    for i in range(k):
        start = i * fold_size
        end = start + fold_size
        test = data[start:end]
        train = data[:start] + data[end:]
        folds.append((train, test))
    return folds

data = list(range(10))
print(k_fold_split(data, 5))
