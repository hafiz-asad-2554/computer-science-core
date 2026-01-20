import pandas as pd

# Mock Data
data = {
    'lat': [40, 41, 42],
    'lng': [-75, -74, -73],
    'desc': ['EMS: Back Pain', 'Fire: Building Fire', 'Traffic: Car Accident'],
    'zip': [19525, 19446, 19001]
}
df = pd.DataFrame(data)

df['Reason'] = df['desc'].apply(lambda title: title.split(':')[0])
print(df['Reason'].value_counts())
