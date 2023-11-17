import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class Alien2 here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Alien2 extends Enemy
{
    GifImage EnemyGif = new GifImage("alien2.gif");
    /**
     * Act - do whatever the MiniAndroid wants to do. This method is called whenever
     * the 'Act' or 'Run' button gets pressed in the environment.
     */
    public void act()
    {
        setImage(EnemyGif.getCurrentImage());
    }
}
