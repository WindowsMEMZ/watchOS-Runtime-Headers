//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTXPCServiceDataInterface_Protocol_h
#define CTXPCServiceDataInterface_Protocol_h
@import Foundation;

@protocol CTXPCServiceDataInterface 
/* instance methods */
- (void)setPacketContextActiveByServiceType:(id)type connectionType:(int)type active:(BOOL)active completion:(id /* block */)completion;
- (void)resetAPNSettings:(id /* block */)apnsettings;
- (void)sendDeadPeerDetection:(id /* block */)detection;
- (void)setInternationalDataAccess:(id)access status:(BOOL)status completion:(id /* block */)completion;
- (void)getInternationalDataAccess:(id)access completion:(id /* block */)completion;
- (void)setSupportDynamicDataSimSwitch:(BOOL)switch completion:(id /* block */)completion;
- (void)setSupportDynamicDataSimSwitch:(BOOL)switch forIccid:(id)iccid completion:(id /* block */)completion;
- (void)getSupportDynamicDataSimSwitch:(id /* block */)switch;
- (void)getPacketContextCount:(id /* block */)count;
- (void)getConnectionAvailability:(id)availability connectionType:(int)type completion:(id /* block */)completion;
- (void)getTetheringStatus:(id /* block */)status connectionType:(int)type;
- (void)getActiveConnections:(id)connections completion:(id /* block */)completion;
- (void)getConnectionState:(id)state connectionType:(int)type completion:(id /* block */)completion;
- (void)getDataStatus:(id)status completion:(id /* block */)completion;
- (void)getSliceTrafficDescriptorsInfo:(id)info connectionType:(int)type completion:(id /* block */)completion;
- (void)getSliceTrafficDescriptors:(id /* block */)descriptors;
- (void)getPublicDataBearer:(id /* block */)bearer;
- (void)getPublicNrFrequencyRange:(id /* block */)range;
- (void)getNATTKeepAliveOverCell:(id)cell completion:(id /* block */)completion;
- (void)isTetheringEditingSupported:(id)supported completion:(id /* block */)completion;
- (void)getAnbrActivationState:(id)state completion:(id /* block */)completion;
- (void)queryAnbrBitrate:(id)bitrate bitrate:(id)bitrate direction:(int)direction completion:(id /* block */)completion;
- (void)setCoalescing:(BOOL)coalescing udp:(BOOL)udp completion:(id /* block */)completion;
- (void)simulateDataStall:(BOOL)stall pdp:(int)pdp completion:(id /* block */)completion;
- (void)getCurrentDataSubscriptionContext:(id /* block */)context;
- (void)getPreferredDataSubscriptionContext:(id /* block */)context;
- (void)getCurrentDataServiceDescriptor:(id /* block */)descriptor;
- (void)getPreferredDataServiceDescriptor:(id /* block */)descriptor;
- (void)enterLoopBackMode:(id /* block */)mode;
- (void)addLowLatencyFilter:(id)filter pdp:(int)pdp queueSetId:(unsigned long long)id uplink:(BOOL)uplink completion:(id /* block */)completion;
- (void)deleteLowLatencyFilter:(id)filter pdp:(int)pdp queueSetId:(unsigned long long)id uplink:(BOOL)uplink completion:(id /* block */)completion;
- (void)getLowLatencyFilters:(int)filters queueSetId:(unsigned long long)id completion:(id /* block */)completion;
- (void)setAssertionForConnectionType:(int)type enable:(BOOL)enable completion:(id /* block */)completion;
- (void)setApplicationCategory:(id)category completion:(id /* block */)completion;
@end

#endif /* CTXPCServiceDataInterface_Protocol_h */
