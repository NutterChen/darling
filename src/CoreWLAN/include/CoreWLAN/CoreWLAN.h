/*
 This file is part of Darling.

 Copyright (C) 2019 Lubos Dolezel

 Darling is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Darling is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Darling.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef _CoreWLAN_H_
#define _CoreWLAN_H_

#import <Foundation/Foundation.h>

#import <CoreWLAN/CWEventDelegate.h>
#import <CoreWLAN/CWInternalEventDelegate.h>
#import <CoreWLAN/CWKeychainProxy.h>
#import <CoreWLAN/SFPasswordSharingServiceDelegate.h>
#import <CoreWLAN/WiFiShareKitXPCRequestProtocol.h>
#import <CoreWLAN/WiFiXPCEventProtocol.h>
#import <CoreWLAN/WiFiXPCRequestProtocol.h>
#import <CoreWLAN/CWANQPVenueNameEntry.h>
#import <CoreWLAN/CWANQPWANMetrics.h>
#import <CoreWLAN/CWChannel.h>
#import <CoreWLAN/CWConfiguration.h>
#import <CoreWLAN/CWMutableConfiguration.h>
#import <CoreWLAN/CWANQPCapabilityList.h>
#import <CoreWLAN/CWMessageTracerCache.h>
#import <CoreWLAN/CWANQPRoamingConsortium.h>
#import <CoreWLAN/CWWirelessProfile.h>
#import <CoreWLAN/CWANQPConnectionCapability.h>
#import <CoreWLAN/CWANQPNetworkAuthenticationType.h>
#import <CoreWLAN/CWANQPNAIRealm.h>
#import <CoreWLAN/CWANQPNAIRealmEntry.h>
#import <CoreWLAN/CWANQPDomainName.h>
#import <CoreWLAN/CWChannelHistoryItem.h>
#import <CoreWLAN/CWANQP3GPPCellular.h>
#import <CoreWLAN/CWANQPOperatorFriendlyNameEntry.h>
#import <CoreWLAN/CWBaseStationPPPController.h>
#import <CoreWLAN/CWANQPElement.h>
#import <CoreWLAN/WiFiNetworkInternal.h>
#import <CoreWLAN/CWLocationChannel.h>
#import <CoreWLAN/CWTetherDevice.h>
#import <CoreWLAN/CWBTCStatus.h>
#import <CoreWLAN/CWLocationClient.h>
#import <CoreWLAN/CWNetwork.h>
#import <CoreWLAN/CWAutoJoinStatistics.h>
#import <CoreWLAN/CWWiFiClient.h>
#import <CoreWLAN/CWInterfaceManager.h>
#import <CoreWLAN/CWANQPVenueName.h>
#import <CoreWLAN/CWInterface.h>
#import <CoreWLAN/CWANQPOperatorFriendlyName.h>
#import <CoreWLAN/CWNetworkProfile.h>
#import <CoreWLAN/CWMutableNetworkProfile.h>
#import <CoreWLAN/CWANQPProtoPortTuple.h>
#import <CoreWLAN/CWANQPHS20CapabilityList.h>
#import <CoreWLAN/CWEAPOLClient.h>
#import <CoreWLAN/CWPasswordSharingSimulator.h>
#import <CoreWLAN/WiFiDeviceClientInternal.h>
#import <CoreWLAN/CWUnlockSimulator.h>
#import <CoreWLAN/CWRoamStatistics.h>
#import <CoreWLAN/CW8021XProfile.h>
#import <CoreWLAN/CWANQPNetworkAuthenticationTypeEntry.h>
#import <CoreWLAN/CWIPMonitor.h>
#import <CoreWLAN/CWJoinStatistics.h>
#import <CoreWLAN/WiFiManagerClientInternal.h>

void* CWAddNetworkProfile(void);
void* CWAddNetworkProfileToBottom(void);
void* CWAddPasspointNetworkProfile(void);
void* CWAddPasspointNetworkProfileToBottom(void);
void* CWAuthorizeRight(void);
void* CWClearRecoveryNetworksFromNVRAM(void);
void* CWConfigurationAddNetworkProfile(void);
void* CWConfigurationRemoveNetworkProfile(void);
void* CWConfigurationSetPreferredNetworkProfile(void);
void* CWCurrentTimestamp(void);
void* CWDescriptionForAWDLSuspendReason(void);
void* CWDescriptionForAutoJoinDeferralReason(void);
void* CWDescriptionForAutoJoinTrigger(void);
void* CWDescriptionForXPCErrorCode(void);
void* CWDumpTemporaryLog(void);
void* CWEAPIdentityCreateData(void);
void* CWEAPIdentityCreateFromData(void);
void* CWFindNetworkProfile(void);
void* CWFindNetworkProfileWithID(void);
void* CWFindPasspointNetworkProfile(void);
void* CWHashedSSIDUsingDeviceID(void);
void* CWHashedWPAPassword(void);
void* CWHexadecimalStringFromData(void);
void* CWIEEE80211GASStatusToString(void);
void* CWInterfaceStartAutoJoin(void);
void* CWInterfaceStartHostAPMode(void);
void* CWInterfaceStopHostAPMode(void);
void* CWInterfaceSystemMode8021XAssociate(void);
void* CWInterfaceSystemModePSKAssociate(void);
void* CWInternetSharingCopyConfiguration(void);
void* CWInternetSharingSetConfiguration(void);
void* CWIsInstallEnvironment(void);
void* CWIsWiFiCloudSyncEngineRunning(void);
void* CWKeychainCopyEAPIdentity(void);
void* CWKeychainCopyEAPIdentityList(void);
void* CWKeychainCopyEAPUsernameAndPassword(void);
void* CWKeychainCopyPasspointEAPIdentity(void);
void* CWKeychainCopyPasspointEAPUsernameAndPassword(void);
void* CWKeychainCopyPassword(void);
void* CWKeychainCopyWiFiEAPIdentity(void);
void* CWKeychainCopyWiFiPasspointEAPIdentity(void);
void* CWKeychainDeleteEAPUsernameAndPassword(void);
void* CWKeychainDeleteHostAPModePassword(void);
void* CWKeychainDeletePasspointEAPUsernameAndPassword(void);
void* CWKeychainDeletePassword(void);
void* CWKeychainDeleteWiFiEAPUsernameAndPassword(void);
void* CWKeychainDeleteWiFiPasspointEAPUsernameAndPassword(void);
void* CWKeychainDeleteWiFiPassword(void);
void* CWKeychainDeleteWiFiPassword_10_8(void);
void* CWKeychainFindHostAPModePassword(void);
void* CWKeychainFindPassword(void);
void* CWKeychainFindWiFiEAPUsernameAndPassword(void);
void* CWKeychainFindWiFiPasspointEAPUsernameAndPassword(void);
void* CWKeychainFindWiFiPassword(void);
void* CWKeychainFindWiFiPassword_10_8(void);
void* CWKeychainSetEAPIdentity(void);
void* CWKeychainSetEAPUsernameAndPassword(void);
void* CWKeychainSetHostAPModePassword(void);
void* CWKeychainSetPasspointEAPIdentity(void);
void* CWKeychainSetPasspointEAPUsernameAndPassword(void);
void* CWKeychainSetPassword(void);
void* CWKeychainSetWiFiEAPIdentity(void);
void* CWKeychainSetWiFiEAPUsernameAndPassword(void);
void* CWKeychainSetWiFiPasspointEAPIdentity(void);
void* CWKeychainSetWiFiPasspointEAPUsernameAndPassword(void);
void* CWKeychainSetWiFiPassword(void);
void* CWKeychainSetWiFiPassword_10_8(void);
void* CWKeychainUpdateWiFiKeychainItems(void);
void* CWLookupLocalizedAccessNetworkType(void);
void* CWLookupLocalizedNetworkAuthTypeIndicator(void);
void* CWLookupLocalizedVenueGroupAndType(void);
void* CWMachineSerialNumber(void);
void* CWMergeNetworks(void);
void* CWPreAuthorizeRight(void);
void* CWReadRecoveryNetworksFromNVRAM(void);
void* CWRemoveCloudWiFiProfile(void);
void* CWRemoveNetworkProfile(void);
void* CWRemoveNetworkProfileWithID(void);
void* CWRemovePasspointNetworkProfile(void);
void* CWSynchronizeCloudWiFiProfiles(void);
void* CWSystemKeychainDeleteEAPUsernameAndPassword(void);
void* CWSystemKeychainDeleteHostAPModePassword(void);
void* CWSystemKeychainDeletePassword(void);
void* CWSystemKeychainFindPassword(void);
void* CWSystemKeychainSetEAPIdentity(void);
void* CWSystemKeychainSetEAPUsernameAndPassword(void);
void* CWSystemKeychainSetHostAPModePassword(void);
void* CWSystemKeychainSetPassword(void);
void* CWUpdateNetworkProfile(void);
void* CWUpdateNetworkProfileWithID(void);
void* CWUpdatePasspointNetworkProfile(void);
void* CWValidLengthComputerNameSSIDWithEncoding(void);
void* CWValidLengthSSIDWithEncoding(void);
void* WiFiDeviceClientCopyCurrentNetwork(void);
void* WiFiDeviceClientCopyProperty(void);
void* WiFiDeviceClientDisassociate(void);
void* WiFiDeviceClientGetInterfaceName(void);
void* WiFiDeviceClientGetPower(void);
void* WiFiDeviceClientIsInterfaceAWDL(void);
void* WiFiDeviceClientRegisterDeviceAvailableCallback(void);
void* WiFiDeviceClientRegisterExtendedLinkCallback(void);
void* WiFiDeviceClientRegisterPowerCallback(void);
void* WiFiDeviceClientRegisterVirtualInterfaceStateChangeCallback(void);
void* WiFiDeviceClientScanAsync(void);
void* WiFiDeviceClientTrafficRegistration(void);
void* WiFiGetNetworkChannel(void);
void* WiFiManagerClientCopyDevices(void);
void* WiFiManagerClientCopyInterfaces(void);
void* WiFiManagerClientCopyNetworks(void);
void* WiFiManagerClientCreate(void);
void* WiFiManagerClientDisableNetwork(void);
void* WiFiManagerClientGetDevice(void);
void* WiFiManagerClientGetThermalIndex(void);
void* WiFiManagerClientGetWoWCapability(void);
void* WiFiManagerClientGetWoWState(void);
void* WiFiManagerClientRegisterDeviceAttachmentCallback(void);
void* WiFiManagerClientRegisterWowStateChangedCallback(void);
void* WiFiManagerClientScheduleWithRunLoop(void);
void* WiFiManagerClientSetNetworkProperty(void);
void* WiFiManagerClientSetPower(void);
void* WiFiManagerClientSetThermalIndex(void);
void* WiFiManagerClientSetWoWState(void);
void* WiFiManagerClientTemporarilyDisableNetwork(void);
void* WiFiManagerClientUnscheduleFromRunLoop(void);
void* WiFiManagerClientUpdateNetwork(void);
void* WiFiManagerCopyDeviceList(void);
void* WiFiNetworkCopyBSSIDData(void);
void* WiFiNetworkCopyHashedWPAPassword(void);
void* WiFiNetworkCopyRecord(void);
void* WiFiNetworkCopyShareablePassword(void);
void* WiFiNetworkCreate(void);
void* WiFiNetworkCreateCopy(void);
void* WiFiNetworkGetChannel(void);
void* WiFiNetworkGetIntProperty(void);
void* WiFiNetworkGetOperatingBand(void);
void* WiFiNetworkGetProperty(void);
void* WiFiNetworkGetSSID(void);
void* WiFiNetworkGetSSIDData(void);
void* WiFiNetworkGetShareMode(void);
void* WiFiNetworkGetUserRole(void);
void* WiFiNetworkIsAdHoc(void);
void* WiFiNetworkIsEAP(void);
void* WiFiNetworkIsHotspot(void);
void* WiFiNetworkIsWEP(void);
void* WiFiNetworkIsWPA(void);
void* WiFiNetworkMerge(void);
void* WiFiNetworkSetProperty(void);
void* WiFiXPCEventProtocolInterface(void);
void* WiFiXPCRequestProtocolInterface(void);
void* _CWCopyWiFiKeychainItem_10_9(void);
void* _CWDeleteWiFiKeychainItem_10_9(void);
void* _CWFindWiFiKeychainItemPassword_10_9(void);
void* _CWSetWiFiKeychainItem_10_9(void);
void* _EAPOLClientConfigurationCopyLoginWindowProfiles(void);
void* _EAPOLClientConfigurationCreate(void);
void* _EAPOLClientConfigurationGetDefaultAuthenticationProperties(void);
void* _EAPOLClientConfigurationGetProfileWithID(void);
void* _EAPOLClientConfigurationGetProfileWithWLANDomain(void);
void* _EAPOLClientConfigurationGetProfileWithWLANSSID(void);
void* _EAPOLClientConfigurationGetSystemProfile(void);
void* _EAPOLClientItemIDCopyIdentity(void);
void* _EAPOLClientItemIDCopyPasswordItem(void);
void* _EAPOLClientItemIDCreateWithProfile(void);
void* _EAPOLClientItemIDCreateWithProfileID(void);
void* _EAPOLClientItemIDCreateWithWLANDomain(void);
void* _EAPOLClientItemIDCreateWithWLANSSID(void);
void* _EAPOLClientItemIDGetProfileID(void);
void* _EAPOLClientItemIDGetWLANSSID(void);
void* _EAPOLClientItemIDRemovePasswordItem(void);
void* _EAPOLClientItemIDSetIdentity(void);
void* _EAPOLClientItemIDSetPasswordItem(void);
void* _EAPOLClientProfileCreate(void);
void* _EAPOLClientProfileCreatePropertyList(void);
void* _EAPOLClientProfileCreateWithPropertyList(void);
void* _EAPOLClientProfileGetAuthenticationProperties(void);
void* _EAPOLClientProfileGetID(void);
void* _EAPOLClientProfileGetUserDefinedName(void);
void* _EAPOLClientProfileGetWLANDomain(void);
void* _EAPOLClientProfileGetWLANSSIDAndSecurityType(void);
void* _EAPOLClientProfileSetAuthenticationProperties(void);
void* _EAPOLClientProfileSetWLANDomain(void);
void* _EAPOLControlAnyInterfaceKeyCreate(void);
void* _EAPOLControlCopyLoginWindowClientItemID(void);
void* _EAPOLControlCopyLoginWindowConfiguration(void);
void* _EAPOLControlCopyLoginWindowProfile(void);
void* _EAPOLControlCopyStateAndStatus(void);
void* _EAPOLControlDidUserCancel(void);
void* _EAPOLControlKeyCopyInterface(void);
void* _EAPOLControlKeyCreate(void);
void* _EAPOLControlProvideUserInput(void);
void* _EAPOLControlStart(void);
void* _EAPOLControlStartSystem(void);
void* _EAPOLControlStartSystemWithClientItemID(void);
void* _EAPOLControlStartWithClientItemID(void);
void* _EAPOLControlStop(void);
void* _EAPSecCertificateCopyAttributesDictionary(void);
void* _EAPSecIdentityHandleCreate(void);
void* _EAPSecIdentityHandleCreateSecIdentity(void);
void* _EAPSecIdentityListCreate(void);
void* commitDynamicConfiguration(void);
void* commitGlobalConfiguration(void);
void* commitNetworkConfiguration(void);
void* copyActiveWLANNetworkServices(void);
void* copyPrimaryActiveWLANNetworkService(void);
void* copyPrimaryTopLevelWLANNetworkService(void);
void* copyPrimaryWLANNetworkService(void);
void* copyTopLevelWLANNetworkServices(void);
void* copyWLANNetworkInterface(void);
void* copyWLANNetworkInterfaceForService(void);
void* copyWLANNetworkServices(void);
void* correctEthernetAddressFormat(void);
void* currentNetworkSetAvailable(void);
void* dynamicConfigurationForInterface(void);
void* findSSIDInBeacon(void);
void* generateUUID(void);
void* globalConfiguration(void);
void* globalConfigurationForConfiguration(void);
void* interfaceConfigurationForConfiguration(void);
void* knownNetworkEntryForNetworkProfile(void);
void* legacySecurityTypeForSecurityType(void);
void* locStringForErrorCode(void);
void* networkHiddenOrBroadcast(void);
void* readCurrentNetworkFromNVRAM(void);
void* readRecoveryNetworksFromNVRAM(void);
void* roamingProfileTypeForSchemaString(void);
void* schemaStringForRoamingProfileType(void);
void* schemaStringForSecurityType(void);
void* schemaStringForShareMode(void);
void* schemaStringForUserRole(void);
void* securityTypeForLegacySecurityType(void);
void* securityTypeForSchemaString(void);
void* shareModeForSchemaString(void);
void* stringFromData(void);
void* updateAPModeConfiguration(void);
void* userRoleForSchemaString(void);
void* wlanNetworkInterfaceAvailable(void);
void* wow_get_parameters(void);
void* wow_get_wake_condition(void);
void* wow_preference_enabled(void);
void* wow_set_parameters(void);
void* wow_set_wake_condition(void);
void* wps_cancel(void);
void* wps_generate_pin(void);
void* wps_requires_pin(void);
void* wps_start(void);
void* wps_validate_checksum(void);
void* writeCurrentNetworkToNVRAM(void);
void* writeRecoveryNetworksToNVRAM(void);

#endif
