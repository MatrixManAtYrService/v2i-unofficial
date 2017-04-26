This is a fork of the FHWA's v2i-hub.  The original can be found here:

https://www.itsforge.net/index.php/community/explore-applications/for-search-results#/40/125

This fork doesn't aim to make runtime functionality changes, it's immediate goal is to streamline the setup process, which had some kinks in it.

The primary addition is the Dockerfile, which can be found in this directory.  That file is used by docker to create an image where the v2i-hub is built.  It is also pretty human-readable and documents the steps necessary to run the v2i-hub without a container.
