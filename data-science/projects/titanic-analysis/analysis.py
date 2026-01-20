import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt

# Loading built-in dataset for demo
titanic = sns.load_dataset('titanic')
print(titanic.head())

print("Missing Data:\n", titanic.isnull().sum())

# sns.countplot(x='survived', hue='sex', data=titanic)
# plt.show()
