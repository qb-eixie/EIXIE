import os

text_input = ''
while(True):
    text_input = input("> ")
    if(text_input == "exit"): 
        print("EIXIE: Bye.")
        break
    if(text_input == "."):
        if os.name == 'nt':
            text_input = input()
            print("EIXIE: Output from system:")
            _ = os.system(text_input)
        else:
            print("EIXIE: Output from system:")
            _ = os.system(text_input)


