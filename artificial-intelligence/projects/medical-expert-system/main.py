def diagnose(symptoms):
    if "fever" in symptoms and "cough" in symptoms and "loss_of_smell" in symptoms:
        return "COVID-19"
    elif "fever" in symptoms and "cough" in symptoms:
        return "Flu"
    elif "runny_nose" in symptoms:
        return "Cold"
    else:
        return "Unknown"

print(diagnose(["fever", "cough", "fatigue"]))
