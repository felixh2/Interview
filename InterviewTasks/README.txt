Hello !

1. The instructions for this test are also inside the level blueprint of SphericonMap
2. Write a clear code, comment where needed, use coding concepts and practices where needed.
3. You can fly with your imagination and do crazy stuff - show us your strengthness.
3. You *can not* ignore the files that are supplied to you.
4. Code with errors will not be checked, so double check it before sending back.


Welcome to our planet, foreigner !


Task 1: 
------
0. Each Sphericon has a color variable and an Identity variable (*private* variables of type 'String').
1. Spawn 10 Sphericons in Random places inside the 'SpherionBox' where each Sphericon has 1 of 5 colors(Black, Blue, Green, Red, White) - you can use the already made materials in the Material folder
2. Set the Sphericon's text (Text render component) to show it's color name (if the sphericon is blue, the text should display 'blue')
3. The 'WhatsMyColorBox' purpose is to tell you what is the color of the Sphericon when you drag it inside.
    a. Create a function called "who is overlapping" that checks who is the overlapping actor. if it's a Sphericon, the function returns 'true' and also a reference to this Sphericon.
       The BP_WhatsMyColorBox should display the Sphericon's color name (with the help of 'ColorAnswer' text render component).
       


Task 2:
------
In our lovely planet we have 2 more types of citizens : Cubicons and Conenicons (who also have Identity and Color name variables)
In this task we use the "WhatsMyIdentityBox" to display the citizen's identity when it's being draged inside.

1. Spawn 5 Sphericons, 5 Cubicons, 5 Conenicons inside the 'SpherionBox' (and same as before - with colors).
2. Drag each citizen type inside the 'WhatsMyIdentityBox' and make it display the citizens Identity (seek for an approach such that you could extend to 100 different citizens).
    Refactor the 'Who is overlapping' function to deal with those 3 types of citizens(you can use the predefined Enum - E_PlanetCitizens)
3. Drag each citizen to 'WhatIsMyColorBox' to display it's color. 
  Note : 1. if you need to refactor what you've previously done - go ahead and refactor it
             2. Will your solution still be valid when you have 100 types of citizens ?


Task 3:
------
The planet is on fire !
We have a ship that can only save the Sphericons and the blue Conenicons and the blue Cubicons, but sadly not the others :-(

1. Convert all the citizens to AI's and make them move to the 'WhatsMyIdentity' trigger box. if the citizen is of type Sphericon, he can procceed to the ship - make him move to the ship and then to be attached to it.
   If the citizen is other than Sphericon, he needs to go to the 'WhatIsMyColorBox' and only if he is blue he can proceed to the ship.
2. Make each citizen to move at different speed.
3. Make the ship wait ~15 sec (since hitting Play) before it departs to it's journey
4. When a survivor is attached to the ship, he has to be happy. write a function "BeHappy" such that:
	a. if it's a Sphericon, it's text render component will display "I"m a VIP".
	b. if it's a Cubicon, it's text render component will display "Never loved this place".
	c. if it's a Conenicon, it's text render component will display "To a better future!".
guidelines - where should you put "BeHappy" function?, should you use inheritance?
5. Apart from being happy, the survivor should also glow and emit particles, write a function "GlowFromHappiness" such that:
	a. if it's a Sphericon, it will emit blue particles.
	b. if it's a Cubicon, it will emit yellow particles.
	c. if it's a Conenicon, it will emit red particles.
4. Play a 'Star wars' sequence of the ship when it departs such that we can see the ship together with the survivors.


Task 4:
------
1. After the sequence ended, display a widget with the following data: how many survived, how many died :-( 

------- GOOD LUCK ! -----------
