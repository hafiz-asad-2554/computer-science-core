import pandas as pd
import io

csv_data = """Name,Age,City
Alice,25,New York
Bob,30,Los Angeles
Charlie,35,Chicago"""

df = pd.read_csv(io.StringIO(csv_data))
print(df.head())
