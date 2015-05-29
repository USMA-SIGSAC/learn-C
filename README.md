<h1>learn-C</h1>
use "Learn C the Hard Way" and post your progress here!</br>
<a href="http://c.learncodethehardway.org/book/">http://c.learncodethehardway.org/book/</a>
<h2>Git and Learn C the Hard Way instructions</h2>
</br>
<h3>Git Initial Setup</h3>
<ol>
    <li>Tools
        <ul>
            <li><a href="http://rogerdudler.github.io/git-guide/">Here's</a> a good Git tutorial. Use the commands rather than other ways of interacting with Github to build proficiency.</li> 
            <li>Use Vim as your text editor for LCTHW. If you're on a target box you don't get to choose what tools are installed, so learn Vim because it (or at least Vi) should be on every *nix box. <a href="http://www.openvim.com/">Here's a good Vim tutorial.</a></li>
        </ul>
    <li>Install Git if you don't have it</br>
        &nbsp&nbsp<code>sudo apt-get install git</code>
    </li>
    
    <li>make a new directory (such as Git)</br>
        &nbsp&nbsp<code>mkdir Git</code>
    </li>
    
    <li>go into the directory and clone this repo to download a working local copy</li>
        &nbsp&nbsp<code>cd Git</code></br>
        &nbsp&nbsp<code>git clone https://github.com/USMA-SIGSAC/learn-C</code?
    </li>
    
    <li>make a new directory using your handle
        &nbsp&nbsp<code>cd /learn-C</code></br>
        &nbsp&nbsp<code>mkdir <em>your handle</em></code>
    </li>
</ol>
<h3>Making Contributions</h3>
<ol>
    <li>inside your directory, put your learn C progress!<strong>**DO NOT delete/modify OTHER PEOPLE's FOLDERS**</strong></li>
 
    <li>
        after you are done for the day, update and save your commit by
        &nbsp&nbsp<code>git add --all</code></br>
        &nbsp&nbsp<code>git comimt -m "ex1, ex2, ex3" </code></br>
        &nbsp&nbsp&nbsp&nbsp(you can put whatever message describing your commit between " ")
    </li>
    
    <li>
        submit your commit by
        &nbsp&nbsp<code>git push origin</code></br>
        &nbsp&nbspif you get an error at this point try "git pull" and then try "git push origin" again.
    </li>
</ol>
