# Welcome to the Pocketfork project! #

Pocket Fork is a "bot" for World of Warcraft. It is a fork of <a href='http://pocketgno.me'>Pocket Gnome.</a>, you can find out more about Pocket Gnome and the latest (closed source) <a href='http://pocketgno.me'>here.</a>

As many of you know Pocket Gnome has unfortunately gone closed source but that does not mean all the open source code that was out there is useless... we will attempt to keep it running.

IMHO there is allot that goes in to an open source project beyond the code it self, its you the users, the routes, the behaviors, the testing, the bug reports, the flaming... its everything pulled together that creates a good open project. I will attempt to pull together all of these resources in to one place in order to attempt to keep the spirit of the original Pocket Gnome community alive.

# Warning #

This will not happen over night, I have **ZERO** experience programing in objective-c, and almost no experience reverse engineering. I have already starting learning IDA-PRO, and how to find offsets. I have also been approached by others whom wish to help, which will make this process much better.

**If you wish to help, please send me an email pocketfork1@gmail.com**

## My Promise to you ##
We will never take this project closed source, this is a community based project and always will be. If you would like to help out with, routes, tutorials, art, documentation, translations, etc. let us know.

# Quick build instructions #

People have asked for some quick down and dirty build instructions, so here goes.. First you need XCode, so go and download Xcode and come back once its installed.

## Now on to the build ##

#First you need to grab the source:
```
svn checkout http://pocketfork.googlecode.com/svn/trunk/ pocketfork-read-only
```

#Now you need to load the plugin:
```
Click on the "ShortcutRecorder.ibplugin"
```

#Now you need to click/open the project
```
Click on "Pocket Gnome.xcodeproj"
```

This will load the project in to XCode and you can now start to build.

I would recommend going to tools and doing a clean all targets, then you can make a build.

Right now its still building and calling itself pocketgnome or ggteabag for the debug build. I will change this soon, XCode is new to me I prefer just plain Makefiles but I can get around to working with this.