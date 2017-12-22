1. I'm not sure how to answer this one.

2. Create - A new process is created.
   Running - The process is executing as instructed.
   Waiting - The process is ready to run, but is waiting on the scheduler.
   Terminated - The process has ended.

3. A `write` system call takes 365.876923 ns. A `printf` function call takes 12.876923 ns. `Write` requires significant more time compared to `printf`.

4. It has something to do with the way that `printf` operates. `Printf` uses a buffer to store data and waits until the buffer is full before executing the call. Also system calls have to interact with the kernal, which takes up additional time.
