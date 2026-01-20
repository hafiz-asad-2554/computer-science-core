def confusion_matrix(y_true, y_pred):
    TP = TN = FP = FN = 0
    for t, p in zip(y_true, y_pred):
        if t == 1 and p == 1: TP += 1
        elif t == 0 and p == 0: TN += 1
        elif t == 0 and p == 1: FP += 1
        elif t == 1 and p == 0: FN += 1
    return [[TN, FP], [FN, TP]]

y_true = [1, 0, 1, 1, 0]
y_pred = [1, 0, 0, 1, 1]
print(confusion_matrix(y_true, y_pred))
