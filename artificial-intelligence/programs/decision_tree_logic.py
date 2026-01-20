def predict(outlook, humidity):
    if outlook == "Sunny":
        if humidity == "High": return "No Play"
        else: return "Play"
    elif outlook == "Overcast":
        return "Play"
    elif outlook == "Rainy":
        return "No Play"

print(predict("Sunny", "Normal"))
