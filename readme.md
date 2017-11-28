# Lithium
**Lithium project** is *X-Ray fork* that aims to combine features of all *S.T.A.L.K.E.R.* game addons such as *Clear Sky, Shadow of Chernobyl and Call of Pripyat*.

- Set of new 'non-vanilla' features will be flexible so any part of it can be disabled by ingame options menu and/or game console.
- Refactored engine source code will be more accurate at error reporting so there will be no just `stack trace:` with nothing below after so-called "engine crash"<sup> [1]</sup>
- There are plans to create some kind of "emergency resources package" that will be loaded when some resource is corrupted or doesn't exist.

# Editor
Lithium Editor is a tool designed to help mod developers at resource debugging and configuring. It will contain external log, weather editor (as it was in original CS and CoP addons), statistics view, NPC logic debugger and other small useful features.
##### Editor is **NOT** X-Ray SDK or any remake of it.<sup> [2]</sup>
____
1. Application crash caused by undefined behavior or (rarely) by usage of corrupted resources that allow to bypass all checks but causes crash at some point
2. Any MSVC X-Ray modkit/tools sources are welcome! Send me PM for more info.
