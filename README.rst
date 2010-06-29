==========================
Selenium 2 Python Bindings
==========================

The Selenium project is big and awesome. Because of the way the project grew,
all of the language bindings for Selenium currently live in the master SVN repo
and tests/builds/etc are managed through a system of Rake and Maven tasks.

The downside to this setup from a Python standpoint is that the code is spread
throughout different folders in different locations. It's also not clear to a
python developer exactly where client bindings end and Selenium RC starts,
especially if they don't know exactly what Selenium RC is. In reality, there's
a clear deliniation between what you need in order to write python drivers and
the more extensive knowledge needed to work on the rest of the project.

This is my attempt to move things around to make it clear to a Python developer
what needs to be worked on so that the Python bindings can move forward.

Tradeoff
========

Because only the relevant python code is included in this branch, it's possible
for the selenium browser plugins to not be the same bleeding edge version as in
the official repository. Best effort will be made to keep up with the latest
released selenium browser extensions as built by Maven at http://repo1.maven.org/maven2/org/seleniumhq/selenium/

Current Status
===============

* Firefox bindings work with selenium version 2.0.4a
* Selenium Remote bindings work with selenium version 2.0.4a
* Chrome bindings are in progress
* Internet Explorer bindings are in progress
