# msxsl_
This is a Visual Studio 2017 solution to build the msxsl.exe tool from source code.

The original code can be downloaded here: https://www.microsoft.com/en-us/download/details.aspx?id=21714).

Motivation : achive better performance by building a 64 bit version with a modern compiler for a modern platform/CPU.

Following changes were made:
- added MSXML6.0 support (will be used by default)
- removed/commented out MSXML4.0 (if someone needs this and knows how to do it, please enable it again)
- Rename some functions due to collisions with windows API function names
- Removed some deprecated/no more supported function calls
- Added total time calculation in ms (-t option)
- Adjusted messages.mc accordingly
