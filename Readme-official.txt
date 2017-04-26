Open Source Overview
============================
V2I Hub
Version 2.3
V2I Hub was developed to support jurisdictions in deploying connected vehicle technology by reducing 
integration issues and enabling use of their existing transportation management hardware and systems. 
V2I Hub is a software platform that utilizes plugins to translate messages between different devices 
and run transportation management and connected vehicle applications on roadside equipment.


Security and Passwords
----------------------
V2I Hub is middleware that runs on Linux Ubuntu 14.04 LTS. It is recommended that appropriate
security and firewall settings be used on the computer running Linux, including conforming to your 
agency’s security best practices and IT protocols.

For configuration and maintenance, the V2I Hub software includes an Administration Portal that runs 
in a web browser on the host device. The default Username for accessing this Administration Portal is 
ivpadmin and the default password is IvpPa$sw0rd. It is strongly recommended that the ivpadmin 
password be changed with the first login to the Administration Portal via the menu on the left. 
Passwords must be a minimum of 8 characters, with at least 1 number, 1 uppercase letter, 1 lowercase, 
and 1 special character.  Additional users can be created using the Administration Portal by selecting 
Manage Users from the left menu.  While managing users, you can add new users and delete the 
default user ivpadmin.  If you want to delete the ivpadmin default user, It is recommended that you 
create a new user with admin privileges, login as that user, then delete the ivpadmin default user.


License information
-------------------
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this
file except in compliance with the License.
You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software distributed under
the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
KIND, either express or implied. See the License for the specific language governing
permissions and limitations under the License.


System Requirements
-------------------
The V2I Hub software can run on most Linux based computers with 
Pentium core processers, with at least two gigabits of RAM and at least 64GB of drive space.
Performance of the software will be based on the computing power and available RAM in 
the system.  The project was developed and tested on a machine 
with a core i3 processor, 4GB of memory, 64GB of hard drive space, running Ubuntu 14.04 LTS.

The V2I Hub software was developed using c and c++ and requires the following packages installed via apt-get:

cmake
gcc-4.8
g++-4.8
libboost1.55-dev
libboost-thread1.55-dev
libboost-regex1.55-dev
libboost-log1.55-dev
libboost-program-options1.55-dev
libboost1.55-all-dev
libxerces-c-dev
libcurl4-openssl-dev
libsnmp-dev
libmysqlclient-dev
libjsoncpp-dev
uuid-dev
libusb-dev libusb-1.0.0-dev
libftdi-dev
swig
liboctave-dev
gpsd libgps-dev
portaudio19-dev libsndfile-dev
libglib2.0-dev libglibmm-2.4-dev
libpcre3-dev
libsigc++-2.0-dev
libxml++2.6-dev
libxml2-dev
liblzma-dev

The following must be compiled and installed from the included source in TMX_OAM/Externals directory.

Mysql-connector-c__-1.1.3
	Run the following from your TMX_OAM/Externals directory
	tar xzf mysql-connector-c++-1.1.3.tar.gz
		cd mysql-connector-c++-1.1.3
		cmake .
		make
		sudo make install
		cd ..
		rm -rf mysql-connector-c++-1.1.3

J2735r41 (2015)
	Run the following from your TMX-OAM/Externals directory
	./setupAsnJ2735_r41.sh


Compilation Instructions
------------------------
Each project contains its own cmake file.  Downloaders  will need to compile the projects in TMX/Core first. 
Start with the TmxUtils project, then the TmxApi, followed by the TmxCore.  After those are built, you can 
compile any of the projects from the Plugins directory.

To compile a project:
	• Change directory to the Debug or Release subfolder for the project (cd Debug)
	• Run cmake (cmake ..)
	• Run make (make)
		o This will compile the project
	• To create a deployment package type make package


Set Up and Configuration Instructions
-------------------------------------
Instructions can be found in the V2I Hub Sample Set-up Guide.
