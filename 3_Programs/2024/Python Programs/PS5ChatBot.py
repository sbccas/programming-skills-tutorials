# Simple chatbot using dictionary

# A dictionary that contains predefined responses
responses = {
    "hi": "Hello! How can I help you today?",
    "what is your name?": "I am a chatbot created to help you with basic questions.",
    "how are you?": "I'm just a program, but I'm doing great! Thanks for asking.",
    "what is python?": "Python is a high-level programming language used for web development, data analysis, artificial intelligence, and more.",
    "bye": "Goodbye! Have a great day!",
}

def chatbot():
    print("Hello! I am your friendly chatbot. Ask me anything!")
    
    while True:
        # Taking user input
        user_input = input("You: ").lower()  # Convert input to lowercase to make it case-insensitive
        
        # Check if the user wants to exit the conversation
        if user_input == "bye":
            print("Chatbot: " + responses["bye"])
            break
        
        # Check if the user input is in the dictionary and provide the corresponding response
        if user_input in responses:
            print("Chatbot: " + responses[user_input])
        else:
            print("Chatbot: I'm sorry, I don't understand that question.")
        
# Start the chatbot
chatbot()
