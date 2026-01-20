from collections import Counter

def ensemble_predict(predictions):
    return Counter(predictions).most_common(1)[0][0]

print(ensemble_predict([1, 1, 0, 1, 0]))
