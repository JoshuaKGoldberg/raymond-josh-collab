# Command Line Commands

Show all files in the current directory as a list:

```shell
ls -l
```

Open a directory (`.` is the current one) in VS Code _(not the same as Visual Studio)_:

```shell
code .
```

Clears the window:

```shell
clear
```

## Git

In a repository, as you change files, those changes will be marked as "untracked".

To tell Git you care about the changes in some files, add them:

```shell
git add -A
```

Now, you can see the changes to the files you have locally:

```shell
git diff HEAD
```

_(up and down scroll; `q` exits)_

Now you can make a "commit" -a list of changes to file contents in the repo- with a message:

```shell
git commit -m "Started on the next meeting"
```

### Pushing Histories

I have a full repository "clone" locally, with a complete history of all the commits.
To see that history:

```shell
git log
```

To push your changes (your list of commits, aka your history) to the GitHub servers:

```shell
git push
```

> Fun fact: GitHub is just one of a few big sites that host Git repositories for you.

### Pulling

If there are new commits in the history stored on the server's copy of the repository, you can pull them in:

```shell
git pull
```

> Action item for Josh: send GitHub local setup suggestions
