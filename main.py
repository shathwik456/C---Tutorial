import datetime
import os
import webbrowser

import speech_recognition as sr
import wikipedia


def say(txt):
    os.system(f"espeak -v female3 -s 130 -p 80 -g 2 '{txt}'")


def wishMe():
    hour = int(datetime.datetime.now().hour)
    if hour >= 0 and hour < 12:
        print("Good Morning!")
        say("Good Morning...")
    elif hour >= 12 and hour < 18:
        print("Good Afternoon!")
        say("Good Afternoon...")
    else:
        print("Good Evening!")
        say("Good Evening...")
    say("I am ASCII. Please tell me how may I help you?")


def takeCommand():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print('Listening...')
        r.pause_threshold = 1
        audio = r.listen(source)
    try:
        print('Recognizing...')
        query = r.recognize_google(audio, language='en-in')
        print(f"User said: {query}\n")
    except Exception as e:
        print("Say that again please...")
        return "None"
    return query.lower()


while True:
    wishMe()
    query = takeCommand()
    if 'exit' in query:
        break
    if 'wikipedia' in query:
        say('Searching Wikipedia...')
        query = query.replace('wikipedia', '')
        result = wikipedia.summary(query, sentences=2)
        say('According to wikipedia')
        print(result)
        say(result)
    elif 'open' in query:
        query = query.replace('open ', '')
        webbrowser.open(f'https://www.{query}.com')
    elif 'google' in query:
        query = query.replace('google ', '')
        webbrowser.open(f'https://www.google.com/search?q={query}')
    elif 'play music' in query:
        path = input("Enter the path >>>")
        os.startfile(path)
