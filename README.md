# makeymakey-music-light
Arduino project
## Group Members
- Alicia Martin
- Ngoc To (Jade)
- Sanya Sabu
- Shiqi Wu (Scott)
## Technology/Components Used
- Makey Makey board
- 2 drumsticks
- Conductive tape 
- Drum board with cork and conductive tape to play on as input
- Website (that will receive the data from the makey makey board and output preset sounds)
- Speaker to output sounds
- Auxiliary cord to transfer sounds from website to arduino
- Arduino to receive voltage through auxiliary cord and transmit into led lights 
- LED lights to output lights to match the sound
## The Flow
- User uses two drumsticks that have been taped with conductive tape to initiate an event
- User will hit the drum surface which is connected to a makey makey board that sends input to the website 
- The input will be processed through the website that is pre-loaded with 6 sounds, and will output the sounds through the speaker on drum stick tap 
- The speaker transmits the sound so that the user can hear the music
- At the same time, the sound is output through an auxiliary cable connected to an arduino  
- The arduino is preloaded with code that will send a signal to the LED lights, to display certain patterns/lights based on the sounds voltage 
