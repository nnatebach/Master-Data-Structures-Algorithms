## Git Tips

1. Change commit message
```
git commit --amend -m '[new-message]'
```
<br>

2. View all git activities.
```
git log --oneline
```
<br>

3. Unstage file
```
git restore --staged "[the-file-you-want-to-unstage]"
```
<br>

4. Restore to an old commit
   - Step 1: View all git activities.<br>
    <br>
    ```
    git log --oneline
    ```
    You will see a list of all commits including the commit you just recently pushed
      <br>
      ```
      3c66524 (HEAD -> main, origin/main) [add] array-basics note
      fc0fe40 [add] array-basics-practice
      aa4f67a [remove] practice-array-basics.c
      ```
    <br>

   - Step 2: Hard reset to the commit you want to restore to<br>
    E.g. You want to restore to this commit **fc0fe40**<br>
    <br>
    ```
    git reset --hard fc0fe40
    ```
    - Step 3: After you finish with what you want to do (fix/update/add files), you will need to commit all the changes you made and you will have to force push your changes to your remote git.<br>
    <br>
    ```
    git push -f
    ```
    or
    <br>
    ```
    git push --force
    ```
    **Note:** You will still be able to see your past commit on your remote Git until you push your changes to your remote Git.<br>
<br>

5. Commit multiple files<br>
If you want to commit multiple files WITHOUT committing all the files then you will need to enter the specific files that you want to commit.
<br>
    E.g. You have these files below but you only want to commit structure_01.JPG, structure_02.JPG, structure_03.JPG.<br>
    <br>
    
    ```
    new file:   README.md
    new file:   structure_01.JPG
    new file:   structure_02.JPG
    new file:   structure_03.JPG
    new file:   structure_04.JPG
    ```
    <br>
    You will need to enter them specifically<br>
    <br>
    
    ```
    git add structure_01.JPG structure_02.JPG structure_03.JPG
    ```
<br>
6. Edit, without delete, the past commit
