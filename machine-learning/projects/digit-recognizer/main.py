from sklearn import datasets, svm

digits = datasets.load_digits()
clf = svm.SVC(gamma=0.001, C=100.)

# Train on all except last one
clf.fit(digits.data[:-1], digits.target[:-1])

# Predict last one
print("Prediction:", clf.predict(digits.data[-1:]))
