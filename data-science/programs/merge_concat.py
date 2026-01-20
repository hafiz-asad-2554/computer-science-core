import pandas as pd

df1 = pd.DataFrame({'A': ['A0', 'A1'], 'B': ['B0', 'B1']})
df2 = pd.DataFrame({'A': ['A2', 'A3'], 'B': ['B2', 'B3']})

print("Concat:\n", pd.concat([df1, df2]))

left = pd.DataFrame({'key': ['K0', 'K1'], 'A': ['A0', 'A1']})
right = pd.DataFrame({'key': ['K0', 'K1'], 'B': ['B0', 'B1']})

print("\nMerge:\n", pd.merge(left, right, on='key'))
