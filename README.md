# UnrealMPTesting
In this project I created a plugin to make multipler testing faster on Unreal Engine.

It's a very simple plugin that works as a Subsystem to GameInstance class, offering base functions as CreateSession(), FindSessions(), JoinSessions() and so on. These functions already communicate with IOnlineSessionPtr functions and callbacks.

I also added a WBP_Menu, which inherts from Menu class, to make the plugin usable out of the box. You can host and join sessions from this simples menu, as well as quit the game.

If you wish to download the plugin only and not the entire developemnt of it, you can do it from this repository: https://github.com/jonasca23/MultiplayerSessionsUnrealPlugin
