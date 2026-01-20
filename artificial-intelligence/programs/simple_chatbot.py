import re

patterns = {
    r'hello|hi': "Hello! How can I help you?",
    r'weather': "I am just a bot, I cannot check the weather.",
    r'name': "I am PyBot, your AI assistant.",
    r'bye|exit': "Goodbye!"
}

def respond(message):
    for pattern, response in patterns.items():
        if re.search(pattern, message, re.IGNORECASE):
            return response
    return "I don't understand that."

# while True:
#     msg = input("You: ")
#     print("Bot:", respond(msg))
