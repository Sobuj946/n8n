import speech_recognition as sr
import pyttsx3
import datetime
import pywhatkit
import wikipedia
import pyjokes
from win32com.server import exception

listener=sr.Recognizer()
alexa =pyttsx3.init()
voices=alexa.getProperty('voices')
alexa.setProperty('voice', voices[1].id)
def talk(text):
    print("Alexa",text)
    alexa.say(text)
    alexa.runAndWait()
def take_command():
    command=""
    try:
        with sr.Microphone() as source:
            print("Listening...")
            listener.adjust_for_ambient_noise(source)
            voice=listener.listen(source)
            command=listener.recognize_google(voice)
            command=command.lower()
            if 'alexa' in command:
                command=command.replace('alexa','')
    except Exception as e:
        print("Error",e)
    return command
def run_alexa():
    command=take_command()

    if 'time' in command:
        time=datetime.datetime.now().strftime('%I:%M %p')
        print(time)
        talk('current time is'+time)
    elif 'play' in command:
        song=command.replace('play','')
        talk('playing'+song)
        pywhatkit.playonyt(song)
    elif 'tell me about' in command:
        look_for=command.replace('tell me about','')
        info=wikipedia.summary(look_for,sentences=3)
        print(info)
        talk(info)
    elif 'jokes' in command:
        # joke=command.replace('jokes','')
        talk(pyjokes.get_jokes())
    elif 'date' in command:
        talk('Sorry vaiya , I am in another relation')
    else:
        talk('Please say again')
        pywhatkit.search(command)
while True:
    run_alexa()
