# visit our website : https://sites.google.com/view/auricle-robotics/home

from tkinter import * 
from tkinter.ttk import *
  

# visit our website : https://sites.google.com/view/auricle-robotics/home
from time import strftime 
  

root = Tk() 
root.title('Clock') 
  


def time(): 
    string = strftime('%H:%M:%S %p') 
    lbl.config(text = string) 
    lbl.after(1000, time) 

lbl = Label(root, font = ('calibri', 40, 'bold'), 
            background = 'purple', 
            foreground = 'white') 
  # source : https://www.geeksforgeeks.org/python-create-a-digital-clock-using-tkinter/ 

lbl.pack(anchor = 'center') 
time() # visit our website : https://sites.google.com/view/auricle-robotics/home
  
mainloop() # visit our website : https://sites.google.com/view/auricle-robotics/home