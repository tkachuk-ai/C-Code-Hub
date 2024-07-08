# Setting up Xcode on macOS

1. Click on the AppStore icon in your Dock or find it through the Spotlight Search
   
<h1><img src="media/app_store.svg.png" alt="AppStore" width="38px" height=38px"> AppStore</h1>

> [!TIP]
> Use shortcut for Spotlight Search: 'command + space'
2. In the search bar in AppStore type 'Xcode'

<h1><img src="media/Xcode_14.png" alt="Xcode" width="50px" height=50px"> Xcode</h1>

3. Click on the 'get' and 'install' buttons to download the app. You may need to enter your Apple ID password
4. The first time you open Xcode, you will need to agree to the license agreement and install any additional components that Xcode needs
5. After you properly installed the IDE, you will see 3 options:
<p><img src="media/Xcode_options.png" alt="Xcode options" width="400px" height="400px"></p>
  
7. Hit 'Create New Project'
8. To start coding in C, you have to choose a proper template for your project.
   <br>
   For that, you want to choose macOS -> Command Line Tool -> Next

<h1><img src="media/Template.png" alt="Template" width="680px" height="480px"></h1>

9. Now you need to specify some properties of your project.
   <br>
   Give a name for your project and select 'C' as your programming language

<h1><img src="media/Xcode_properties.png" alt="Properties" width="680px" height="480px"></h1>

10. Now you can see your project created with a default setup and file hierarchy.
    <br>
    
> [!IMPORTANT]
> Typically, you cannot run multiple .c files with main function within the same project.
> However, if you create another thread, you can add a new .c file with another main function and specify which one to run. 

To do that, click on the project name and hit the plus on the bottom to create another thread within the same project. You can create as many threads as you like. 
    
<h1><img src="media/Xcode_thread.png" alt="New thread" width="680px" height="480px"></h1>

11. Now you have two threads with two default main files, and at the top you can specify which one your compiler should run. 
