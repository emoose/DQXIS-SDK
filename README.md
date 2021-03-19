# DQXIS-SDK

An XInput/DXGI wrapper DLL bringing several enhancements to DQXIS, via an SDK generated with [UnrealFinderTool](https://github.com/CorrM/Unreal-Finder-Tool).

## Improvements
- Allows TemporalAA & fixes render resolution of `USceneCaptureComponent2D`, used in character/monster viewers & fun-sized forge, resolution should now match up with games. (comparison: https://slow.pics/c/NCyrOhgP, click image to compare)
- Adds `FirstPersonCamera`, `EnterPartyChat` and `QuitGame` input actions, that can be bound to any key/button via the Input.ini file.
- Unlocks the UE4 dev-console (with cheats for both 3D & 2D mode!) & allows loose, unpacked files to be loaded by the game.
- Fixes `Camera FirstPerson` camera height, and made it so NPCs no longer disappear when viewed up close in first-person.
- (optionally can make `FirstPersonCamera` always use the `Camera FirstPerson` camera instead, allowing the game to mostly be played in first-person!)
- Allows hiding the minimap when in first-person mode.
- Can prevent game from overriding/conflicting with any custom Input.ini bindings (the included Input.ini contains all the default binds used by the game, ready to be customized)
- Fixes some commonly-misconfigured cvars, such as `r.JackLoadReduction.DisableMovementModeOptimization`
- Allows the game to load previously ignored debug packages (may come in useful in some way, eg. allowing the debug map to be loaded in)

The SDK also has a huge amount of the games classes/structs mapped out, giving a nice view into the games internals, including things like the structures of DataTables used by the game!

## Thanks
Huge thanks to idkicarus for providing me a copy of DQXIS!

Thanks to CorrM for creating UnrealFinderTool - 99% of the SDK work was made with that, with just a few tiny changes needed to adapt it for DQXIS.
