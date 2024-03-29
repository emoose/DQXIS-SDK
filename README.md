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

## Development
If you want to look into adding any features/improvements to DQXIS-SDK, please make your changes against the latest Steam version (as of 2021/05/29) - since this now has Denuvo removed it's probably the easiest to work with, and as it's probably the most popular version people own, it'd be best for new features to work with this version before any others.

Seeing that DQXIS-SDK supports 3+ different versions of DQXIS might scare some off, but don't worry about trying to port to them all yourself: as long as the change works on one of the versions I'm happy to try porting it across to the others for you.

## Thanks
Huge thanks to idkicarus for providing me a copy of DQXIS!

Thanks to CorrM for creating UnrealFinderTool - 99% of the SDK work was made with that, with just a few tiny changes needed to adapt it for DQXIS.
