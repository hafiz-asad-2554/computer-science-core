import pandas as pd

df = pd.DataFrame({'Num': [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]})
filtered = df[df['Num'] > 5]
print(filtered)
