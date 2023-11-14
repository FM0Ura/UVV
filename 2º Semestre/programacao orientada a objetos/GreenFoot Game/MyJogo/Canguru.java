import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class Canguru here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Canguru extends Actor
{
    public int cont = 0;
    public boolean acabou = false;
    
    /**
     * Act - do whatever the Canguru wants to do. This method is called whenever
     * the 'Act' or 'Run' button gets pressed in the environment.
     */
    public void act()
    {
        move(3);
        
        if(Greenfoot.isKeyDown("left")){
            turn(-2);
        } else if (Greenfoot.isKeyDown("right")){
            turn(2);
        }
        
        myRemove();
    }
    
    public void myRemove(){
        
        if(isTouching(Borboleta.class)){
            removeTouching(Borboleta.class);
            Greenfoot.playSound("pam1.wav");
            cont = cont + 1;
            
            getWorld().addObject(new Borboleta(), 300, 200);
        }
        
        
        if(cont == 4){
            getWorld().showText("GAME OVER - CANGURU WINS!!!!", 300, 200);
            acabou = true;            
        }
        
        
    }
    
}
