from sklearn.feature_extraction.text import CountVectorizer
from sklearn.naive_bayes import MultinomialNB

emails = ["Free money now", "Hi mom, how are you?", "Win a lottery", "Meeting tomorrow"]
labels = [1, 0, 1, 0] # 1=Spam, 0=Ham

cv = CountVectorizer()
X = cv.fit_transform(emails)

clf = MultinomialNB()
clf.fit(X, labels)

test = ["Free cash"]
print("Prediction:", clf.predict(cv.transform(test)))
