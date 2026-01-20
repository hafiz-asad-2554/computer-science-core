import numpy as np
from sklearn.linear_model import LinearRegression

# Mock Data
X = np.array([[1000], [1500], [2000], [2500]]) # Sqft
y = np.array([300000, 450000, 600000, 750000]) # Price

model = LinearRegression()
model.fit(X, y)

print("Prediction for 1200 sqft:", model.predict([[1200]]))
