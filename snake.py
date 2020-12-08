
# visit our website : https://sites.google.com/view/auricle-robotics/home
import pygame
pygame.init()
dis=pygame.display.set_mode((400,300))
 
 print ('snake')
pygame.display.set_caption('Snake game by Edureka')
 
blue=(0,0,255)
red=(255,0,0)
 
game_over=False
while not game_over:
    for event in pygame.event.get():
        if event.type==pygame.QUIT:
            game_over=True
    pygame.draw.rect(dis,blue,[200,150,10,10])
    pygame.display.update()
    # credits to https://www.edureka.co/blog/snake-game-with-pygame/#createthesnake
    pygame.quit()
    
    # visit our website : https://sites.google.com/view/auricle-robotics/home
quit()