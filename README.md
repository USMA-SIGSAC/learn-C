<h3> learn-C
use "Learn C the Hard Way" and post your progress here!"
http://c.learncodethehardway.org/book/
Git and Learn C the Hard Way instructions</h3>

1. While alternate methods are available for interacting with Github, use a terminal to build proficiency.

2. Install Git if you don't have it 
sudo apt-get install git

3. make a new directory (such as Git)
    <code>mkdir Git</code>

3. go into the directory and clone this repo to download a working local copy

    cd Git
    git clone https://github.com/USMA-SIGSAC/learn-C

4. make a new directory using your handle/githubID/name(if you choose to do so)
in learn-C directy

cd /learn-C
mkdir higunwoo //example


------END OF INITIAL SETUP------
**DO NOT delete/modify OTHER PEOPLE's FOLDERS**

5. inside your directory, put your learn C progress!

*use vim as their text editor because when operating on a target box 
we don't get to choose what tools are on it, but vim, or at least 
vi always will be so you must be proficient at it 

6. after you are done for the day, update and save your commit by

git add --all
git comimt -m "ex1, ex2, ex3" 
(you can put whatever message describing your commit between " ")

7. submit your commit by
git push origin

if you get an error at this point try "git pull" and then try "git push origin" again.

(If you have any questions, look ask batman higunwoo.)

http://rogerdudler.github.io/git-guide/ is a good source to learn about gits.
