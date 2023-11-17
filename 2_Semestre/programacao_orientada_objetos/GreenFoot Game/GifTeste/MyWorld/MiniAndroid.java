import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class MiniAndroid here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class MiniAndroid extends Enemy
{
    GifImage EnemyGif = new GifImage("mini-android.gif");
    /**
     * Act - do whatever the MiniAndroid wants to do. This method is called whenever
     * the 'Act' or 'Run' button gets pressed in the environment.
     */
    public void act()
    {
        setImage(EnemyGif.getCurrentImage());
    }
}
