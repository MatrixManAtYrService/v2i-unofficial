See ./Dockerfile for step by step instructions on building each piece.  That dockerfile will create an image where everything is as built as it can be.

Alternatively, do this:

./preinstall.sh     # builds asn_j2735 and mysql-connector
sudo ./install.sh   # installs asn_j2735 and mysql-connector
./build.sh          # builds everything else
