**Project** - This is a custom-built calender PCB that allows me to upload my school schedule (or just counting down how many days of school I have left!) via WIFI (on an esp32) to an e-ink display and use it in my locker off a AA battery. When it's at home, it will be able to act as a music player or still a calender, allowing me to plug it in via usb-c or just by using wifi and display live music status.

**Total time spent** - 16 hours

## Day 1 - June 25th- 7 hours
This is the first day I started working on it. I can up with the idea beacuse I use to count down the days of school and mark my calendar on a white board, but with this I will be able to keep it all synced up, and displayed nicely. I started off with doing the schematic. My brother told me to use the SAMD21G18A as it is a nice MCU, and I chose the ESP32 for the wifi ascpect of it. I decided I also wanted an e-ink display as it has maximum power saving and looks cool, so I chose the https://www.waveshare.com/3.7inch-e-paper-hat-plus-g.htm?sku=31061.
Switching from the battery to the USB power was very difficult as I didn't know what chips to use, and the schematic for them seemed hard. With a lot of reading, and a little help, I think I got the schematic all finished up for that ascpect, and overall too. It has one USB-C, a SAMD21G18A-AU, a ESP32, 2 buttons, a rotary encoder, and battery to usb power switching, along with the headers for my display.
<img width="1284" height="750" alt="image" src="https://github.com/user-attachments/assets/e7e40aba-a351-4f35-8797-03bc25afc9c7" />
## Day 2 - July 8th - 5.5 hours
Today was my first day of routing this PCB. Along with this being the hardest PCB I've routed, it was also only my 2nd one ever, so I was worried something would go wrong. After my brother gave me some optimal spots to place the parts, I started routing it all by myself. I started off with the power, like the battery and stuff, and moved on to wiring the USB lines. Once that was done, I started wiring the power switching stuff. It was definitly hard, especially trying to put everything on only one layer, but after some time I got it. Lastly, everything got routed to the SAMD21, and I called it done for today. I pretty much routed everything to the board.
That whole essay above pretty much sums up 5.5 hours of figuring out the best way to route it with a lot of trial and error. Along the way, I learnt some cool stuff like you can have vias right under parts and what ground pours are.
<img width="1450" height="706" alt="image" src="https://github.com/user-attachments/assets/e2dae79d-1fce-43f8-ac7f-cf690fd426da" />

## Day 3 - July 27th - 2 hours
After totally not forgetting that I needed to submit it, I got back to it, and looked it over with my brother for the final time to make sure everything was good. I found a small error were I needed a pullup resistor on D+ for it to functional properly. Besides for that, there were a few small errors on my PCB, and some routing lines that looked ugly, so I fixed that up. I also added my silkscreen today which is the Google Calender logo, but it's in the copper layer so it looks pretty cool.
<img width="501" height="426" alt="image" src="https://github.com/user-attachments/assets/995e4e63-afb1-4cf9-9365-ecf88794f12d" />



## Day 4 - July 30th - 1.5 hours

Today, I pretty much fixed up everything that was requested for this board to be approved. I started off with fixing the PCB. There were some caps that we so far from there main IC, so I moved it closer. I also moved the voltage converter and one cap to the front side of the board so JLCPCB could assemble all the parts, and not make it hand-solder 2 of them. Next I made my case. I totally forgot about designing the case. Since I'm not a crazy CAD user, I started off with getting a rough idea of how I wanted it to be in tinkercad. Then, I was able to import my design in Fusion 360, and get exact measurements from there to make the case the right size for my board. It's a very simple case with some cutouts for the screen, EC11, the 2 buttons and the USB-C, but it works. I also learnt how to add a fillet to the sides to make everything rounded and cool!

<img width="1386" height="599" alt="image" src="https://github.com/user-attachments/assets/12560a92-66a1-477c-9ff3-b4a5639b5b70" />
<img width="1009" height="822" alt="image" src="https://github.com/user-attachments/assets/caa7a38d-8fd4-469c-95f2-a9de556f985c" />
