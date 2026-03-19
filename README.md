1. https://www.w3resource.com/cpp-exercises/basic-algorithm/index.php

## What to check before every push

- Pull the latest changes (`git pull --rebase`) so you are not pushing on top of stale code.
- Build or run the programs you modified (for a single file: `g++ -std=c++17 -Wall <file>.cpp -o /tmp/app && /tmp/app`) to ensure they still work.
- Do a quick manual test of any new logic (try a couple of representative inputs) to confirm expected behavior.
- Make sure you are not committing generated files or binaries (only the `.cpp` sources and supporting docs should be tracked).
- If you changed program behavior, briefly note it in the README or code comments where appropriate.
- Review your diff (`git diff`) to catch accidental changes and write a clear commit message that explains the why and what of the change.
