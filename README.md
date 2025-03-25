# hello c

I can't remember, but I think this is the first C project I created on Windows, and I liked C. :)

# weblik 
is a CLI tool to create a websites shortcuts by creating a **HTML** file that replace the current windows to the website you want .

## compile 
1. you have **Make** right?
2. run : `make folder` to creat **/objs/** folder 
3. run : `make`  to compile it
4. run : `make play`  to run the program
   
## usage
run the program and will ask you :
```
  file name :
```
here put the full **path/name** for the shourtcut (don't need type the extntion _.html_) .

then :
```
  file name : name
  website link : http://~~~~~~~~~~~~~~~~~~.com
```
type the **url** to website .


### errors
The buffer for the input **full name** is `50`, and for the **website link** it is `200`. If you reach the maximum, the program will warn you, so use it with confidence.
