# **About Docker**

## Docker Run COMMAND:
    ```docker run [OPTIONS] IMAGE [COMMAND] [ARG...]
    ```

docker run <image-name> ==> this will run the image and create a container with some random name to it.
                            And if the image is not found locally it will search the docker repository for the image and download it.
                            By default it will download the one with the latest tag.

docker run --name <container-name> <image-name> ==> This will assign the name to the container.


--name ==> this will set a name to the docker container created by running the image.
-v <host dir>:<container dir>==> this help the container to have a directory mapped to one of the host's directory to help easy the file coping and stuff.
-p xxxx:yyyy ==> Help with port mapping. Where xxxx denotes host port number, and yyyy denotes container port number.
