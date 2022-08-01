import pygame
from pygame import mixer
from tkinter import *
import os


def songplay():
    nowplaying=playlist.get(ACTIVE)
    print(nowplaying)
    mixer.music.load(nowplaying)
    songstatus.set("PLAYING")
    mixer.music.play()



def pausesong():
    songstatus.set("PAUSED")
    mixer.music.pause()



def stopsong():
    songstatus.set("STOPPED")
    mixer.music.stop()




def resumesong():
    songstatus.set("RESUMING")
    mixer.music.unpause()




root=Tk()
root.title(" MORE THAN JUST MUSIC ")

mixer.init()
songstatus=StringVar()
songstatus.set(" HAND PICKS JUST FOR YOU ")



playlist=Listbox(root,selectmode=SINGLE,bg="#00ffff",fg="black",font=('Times New Roman',15),width=40)
playlist.grid(columnspan=5)



os.chdir(r"C:\Users\HP\Music\New folder")
songs=os.listdir()
for s in songs:
    playlist.insert(END,s)


playbtn=Button(root,text="PLAY",command=songplay)
playbtn.config(font=('arial',20),bg="DodgerBlue2",fg="white", padx=7,pady=7)
playbtn.grid(row=1,column=0)

pausebtn=Button(root,text="PAUSE",command=pausesong)
pausebtn.config(font=('arial',20),bg="DodgerBlue2",fg="white", padx=7,pady=7)
pausebtn.grid(row=1,column=1)

stopbtn=Button(root,text="STOP",command=stopsong)
stopbtn.config(font=('arial',20),bg="DodgerBlue2",fg="white", padx=7,pady=7)
stopbtn.grid(row=1,column=2)

resumebtn=Button(root,text="RESUME",command=resumesong)
resumebtn.config(font=('arial',20),bg="DodgerBlue2",fg="white", padx=7,pady=7)
resumebtn.grid(row=1,column=3)


mainloop()











