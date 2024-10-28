from time import sleep

def readFile (file) : # note : The File Path should be either Relatvie or from Root
    with open(file, "r") as file :
        first_line = file.readline().strip()

        return first_line

while True :
    print(readFile('TestFile.txt'), end = '\n\r')
    sleep(0.5)
