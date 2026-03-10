from groq import Groq # The reason I used Groq is because it's free and fast
import tkinter as tk # The classic graphics library for python

"""
Soo uhh I wrote this project like a month ago and it was just a code scrap
I never published it until now since I'm building this scrap I can just put this here
I hope you don't get offended by the program and if you did I'm so sorry
"""

API_KEY = "" # Make sure to put your key here

SYSTEM_PROMPT = "You are Allah" # Made the system prompt as small as possible

"""
It's actually very difficult to get the AI to roleplay something controversial
And I'm sure it's gonna break character whenever you ask something risky
If you've got a better system prompt that actually works (Or an API model on Groq that obeys)
Then please just write to me on discord or send me a PR
"""

client = Groq(api_key=API_KEY)

messages = [{"role": "system", "content": SYSTEM_PROMPT}] # We do save history on RAM

def chat(user_message):
    messages.append({"role": "user", "content": user_message})

    completion = client.chat.completions.create(
        model="llama-3.3-70b-versatile", # This model is good enough
        messages=messages,
        temperature=0.8, # The temperature is high so the AI acts the way he should
        max_completion_tokens=512, # Long enough for a decent response 
    )

    reply = completion.choices[0].message.content
    messages.append({"role": "assistant", "content": reply})

    return reply

def send_message():
    user_text = entry.get().strip()
    if not user_text:
        return

    entry.delete(0, tk.END) # Just chat with allah no?

    reply = chat(user_text)
    chatbox.delete("1.0", tk.END) # Tried my best to make this code as short as possible LMAOO
    chatbox.insert(tk.END, reply)

root = tk.Tk()
root.geometry("500x600") # Big enough righ

chatbox = tk.Text(root, wrap=tk.WORD) # Best widget imo
chatbox.pack(fill=tk.BOTH, expand=True, padx=5, pady=5)

entry = tk.Entry(root)
entry.pack(fill=tk.X, padx=5, pady=5)

"""
Omg this is so haram why am I even coding this LMAOOO
It's ramadan as well so it's double haram but this is for science
"""

send_btn = tk.Button(root, text="Send", command=send_message)
send_btn.pack(padx=5, pady=5)

root.mainloop()