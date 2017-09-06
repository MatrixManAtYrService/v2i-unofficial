v2i-unofficial
==============

This is a fork of the FHWA's v2i-hub.  The original can be found [here](https://www.itsforge.net/index.php/community/explore-applications/for-search-results#/40/125)

This fork doesn't aim to make runtime functionality changes.  Instead its goal is to streamline the setup process, which had some kinks in it.  For instructions on using the streamlined setup, see [README-unofficial.md](README-unofficial.md).  There is also the [original README](Readme-official.txt).


Example Use
-----------

Suppose you want to decode the J2735 BSM message.  After [building](README-unofficial.md) the v2i hub, you'll want to include some of its headers and link to some of its binaries.

Here is an excerpt from a CMakeLists.txt file in project that does so:

    target_include_directories(BSM_Adapter PUBLIC ${CMAKE_SOURCE_DIR}/v2i-hub/TMX/Common/TmxMessages/include/)
    target_include_directories(BSM_Adapter PUBLIC ${CMAKE_SOURCE_DIR}/v2i-hub/TMX/Core/TmxApi/)
    target_link_libraries(BSM_Adapter ${CMAKE_SOURCE_DIR}/v2i-hub/TMX/Core/TmxUtils/Debug/libtmxutils.a)

If you add the above include directories and linker directives, you will be able to call into these files:
 - [BsmConverter.h](TMX/Core/TmxUtils/src/BsmConverter.h)
 - [BsmConverter.cpp](TMX/Core/TmxUtils/src/BsmConverter.cpp)
 
Here is an example of its usage

    #include "../v2i-hub/TMX/Core/TmxUtils/src/BsmConverter.h"
    
    void OnMessage(array<char, MAX_MESSAGE_SIZE> buffer, std::size_t bytes)
    {
		    BasicSafetyMessage_t bsm;
		    bsm.msgID = buffer[0];

		    BSMblob_t blob;
		    blob.buf = (uint8_t*) std::begin(buffer) + 1;
		    blob.size = (int) bytes - 1;
		    bsm.blob1 = blob;

		    tmx::messages::DecodedBsmMessage decoded;
		    tmx::utils::BsmConverter::ToDecodedBsmMessage(bsm, decoded);

		    std::cout << decoded.get_Latitude() << std::endl;
	            std::cout << decoded.get_Longitude() << std::endl;
        ...

