facts = {
    "is_mammal": ["dog", "cat", "human"],
    "has_fur": ["dog", "cat"],
    "has_legs": ["dog", "cat", "human"]
}

def check_fact(predicate, entity):
    return entity in facts.get(predicate, [])

def infer_is_animal(entity):
    if check_fact("is_mammal", entity):
        return True
    return False

print("Is dog an animal?", infer_is_animal("dog"))
