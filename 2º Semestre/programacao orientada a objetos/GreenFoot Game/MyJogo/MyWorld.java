import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class MyWorld here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class MyWorld extends World
{
    GreenfootSound bs = new GreenfootSound("Menumusic.wav");
    
    Canguru ca = new Canguru();
    
    /**
     * Constructor for objects of class MyWorld.
     * 
     */
    public MyWorld()
    {    
        // Create a new world with 600x400 cells with a cell size of 1x1 pixels.
        super(600, 400, 1); 
        
        //bs.playLoop();
        
        prepare();
    }
    /**
     * Prepare the world for the start of the program.
     * That is: create the initial objects and add them to the world.
     */
    private void prepare()
    {
        Borboleta borboleta = new Borboleta();
        addObject(borboleta,115,62);
        
        addObject(new Borboleta(), 120, 140);
        addObject(new Borboleta(), 120, 240);
        addObject(new Borboleta(), 120, 340);
        
        addObject(ca, 400, 80);
        
        
    }
    
    public void act(){
        showText("Score: " + ca.cont , 50, 10);
        if(ca.acabou){
            Greenfoot.stop();
        }
    }
}
