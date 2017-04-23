/*
 * DsrcMessageManagerPlugin.h
 *
 *  Created on: Feb 26, 2016
 *      Author: ivp
 */

#ifndef DSRCMESSAGEMANAGERPLUGIN_H_
#define DSRCMESSAGEMANAGERPLUGIN_H_

#include <atomic>
#include <array>
#include <map>
#include <mutex>
#include <vector>
#include "PluginClient.h"
#include "UdpClient.h"

namespace DsrcMessageManager
{

struct MessageConfig
{
	uint ClientIndex;
	std::string TmxType;
	std::string SendType;
	std::string Psid;
};

class DsrcMessageManagerPlugin : public tmx::utils::PluginClient
{
public:
	DsrcMessageManagerPlugin(std::string name);
	virtual ~DsrcMessageManagerPlugin();
private:
	void UpdateConfigSettings();
	bool UpdateUdpClientFromConfigSettings(uint clientIndex);
	bool ParseJsonMessageConfig(const std::string& json, uint clientIndex);
	int GetUdpClientIndexForMessage(std::string subtype);
	void SendMessageToRadio(IvpMessage *msg);

	// Virtual method overrides.
	void OnConfigChanged(const char *key, const char *value);
	void OnMessageReceived(IvpMessage *msg);
	void OnStateChange(IvpPluginState state);

	// Mutex along with the data it protects.
	std::mutex _mutexUdpClient;
	std::array<tmx::utils::UdpClient*, 4> _udpClientList;
	std::map<std::string, MessageConfig> _messageConfigMap;
	std::string _signature;

	// Thread safe bool set to true the first time the configuration has been read.
	std::atomic<bool> _configRead;

	uint _skippedNoDsrcMetadata;
	uint _skippedNoMessageRoute;
	uint _skippedInvalidUdpClient;
};

} /* namespace DsrcMessageManager */

#endif /* DSRCMESSAGEMANAGERPLUGIN_H_ */
