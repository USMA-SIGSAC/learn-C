<h1>learn-C</h1>
use "Learn C the Hard Way" and post your progress here!</br>
<a href="http://c.learncodethehardway.org/book/">http://c.learncodethehardway.org/book/</a>
<h2>Instructions</h2>
</br>
<h3>Git Initial Setup</h3>
<ol>
    <li>Tools
        <ul>
            <li><a href="http://rogerdudler.github.io/git-guide/">Here's</a> a good Git tutorial. Use the commands rather than other ways of interacting with Github to build proficiency.</li> 
            <li>Use Vim as your text editor for LCTHW. If you're on a target box you don't get to choose what tools are installed, so learn Vim because it (or at least Vi) should be on every *nix box. <a href="http://www.openvim.com/">Here's a good Vim tutorial.</a></li>
            <li>* Using <code>:set autoindent</code> and <code>:set cindent</code> sets indentation for you automatically!</li>
        </ul>
    <li>Install Git if you don't have it</br>
        &nbsp&nbsp<code>sudo apt-get install git</code>
    </li>
    <li>make a new directory (such as Git)</br>
        &nbsp&nbsp<code>mkdir Git</code>
    </li>
    <li>go into the directory and clone this repo to download a working local copy</li>
        &nbsp&nbsp<code>cd Git</code></br>
        &nbsp&nbsp<code>git clone https://github.com/USMA-SIGSAC/learn-C</code>
    </li>
    <li>make a new directory using your handle</br>
        &nbsp&nbsp<code>cd /learn-C</code></br>
        &nbsp&nbsp<code>mkdir <em>yourhandle</em></code>
    </li>
</ol>
<h3>Making Contributions</h3>
<ol>
    <li>
        inside your directory, put your learn C progress! <strong>**DO NOT delete/modify OTHER PEOPLE's FOLDERS**</strong>
    </li>
    <li>
        after you are done for the day, update and save your commit by</br>
        &nbsp&nbsp<code>git add --all</code></br>
        &nbsp&nbsp<code>git commit -m "ex1, ex2, ex3"</code></br>
        &nbsp&nbsp(you can put whatever message describing your commit between "&nbsp")
    </li>
    <li>
        Before you submit, you will get an error message if your someone else made changes to the web repository between time of your clone and submission.</br>
        &nbsp&nbsp<code>git pull https://github.com/USMA-SIGSAC/learn-C</code></br>&nbsp&nbsp
        This will make your local folder up-to-date with web repository.
    </li>
    <li>
        Now, submit your commit by</br>
        &nbsp&nbsp<code>git push origin</code></br>
        &nbsp&nbsp
    </li>
    
</ol>
</br>
</br>
<h4>If you have any questions regarding anything, let higunwoo or batman know.</h4>
