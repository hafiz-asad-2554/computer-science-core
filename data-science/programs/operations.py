import pandas as pd

df = pd.DataFrame({'col1': [1, 2, 3, 4], 
                   'col2': [444, 555, 666, 444], 
                   'col3': ['abc', 'def', 'ghi', 'xyz']})

print(df['col2'].unique())
print(df['col2'].nunique())
print(df['col2'].value_counts())
