# Building the V2I Hub

See the  [Dockerfile](Dockerfile) for step by step instructions on building each piece.
At the very least, you'll need to install the packages listed there and create the symbolic link.

Then you can decide which of the two sections that follow is more relevant for you.

## Use the v2i-hub docker image as a base image for your project

This option isolates the build from your machine, if you're not in linux yourself (recommended) then you'll at least need access to a docker daemon running linux. [docker-machine](https://docs.docker.com/machine/) provides this on Windows.

 1. [Install docker](https://www.digitalocean.com/community/tutorials/how-to-install-and-use-docker-on-ubuntu-16-04)
 2. Run `docker build . -t v2i-hub`
  - Docker will build the v2i hub into an image tagged `v2i-hub`.
 3. To poke around the built image run `docker run -it --rm v2i-hub`.
  - You're now in a container
    - You can find the outputs of the build in `/usr/local/src/v2i-hub`
    - type `exit` to leave
     - If you want to copy files from the container to your local filesystem, try:
<pre>
    # remove any existing containers on the v2i hub image
    docker ps -a | grep Exit | cut -d ' ' -f 1 | xargs docker rm
    
    # create a new container
    docker run v2i-hub 

    # get its id
    CONTAINERID=$(docker ps -a | grep v2i-hub | awk cut -d ' ' -f 1)
    
    # copy the build directory to ~/v2i-hub
    docker cp $CONTAINERID:/usr/local/src/v2i-hub ~/v2i-hub
    
    # remove the container
    docker rm $CONTAINERID
</pre>
    
 4. In your own docker file, use `FROM v2i-hub:latest` and orchestrate your build in similar fasion, you can reference the v2i-hub binaries in /usr/local/src/v2i-hub/....

## Build v2i-hub in your local filesystem

This option assumes you're using ubuntu 16.04, it has been tested on x86 and ARMv7

Be sure to first install the packages mentioned in [Dockerfile](Dockerfile)
If you run into an error regarding `libmysqlclient_r` then you'll also need to create the symbolic link (see line 40).
Then run:

    ./preinstall.sh     # builds asn_j2735 and mysql-connector
    sudo ./install.sh   # installs asn_j2735 and mysql-connector
    ./build.sh          # builds everything else

Your binaries will be in folders called `build`, see those build scripts for details.
One way to incorporate this into your project is to include v2i-unofficial as a git submodule and then call the above scripts as part of your build process.
