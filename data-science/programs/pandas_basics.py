import pandas as pd

data = {
    'Name': ['Tom', 'Nick', 'Krish', 'Jack'],
    'Age': [20, 21, 19, 18]
}
df = pd.DataFrame(data)
print(df)
print("\nDescription:\n", df.describe())
