class KnowledgeBase:
    def __init__(self):
        self.kb = set()
    
    def tell(self, sentence):
        self.kb.add(sentence)
        
    def ask(self, query):
        return query in self.kb

kb = KnowledgeBase()
kb.tell("It is raining")
print(kb.ask("It is raining"))
