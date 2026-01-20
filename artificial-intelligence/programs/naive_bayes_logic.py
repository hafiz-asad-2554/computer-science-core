# Simple probabilistic reasoning
def naive_bayes_demo():
    # P(Spam) = 0.5
    # P(Viagra | Spam) = 0.8
    # P(Viagra | Ham) = 0.1
    # Calc P(Spam | Viagra)
    
    p_spam = 0.5
    p_ham = 0.5
    p_word_spam = 0.8
    p_word_ham = 0.1
    
    # Bayes Theorem
    p_spam_word = (p_word_spam * p_spam) / ((p_word_spam * p_spam) + (p_word_ham * p_ham))
    print(f"Probability of SPAM given 'Viagra': {p_spam_word}")

naive_bayes_demo()
