//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFActivityAdvertiser_h
#define SFActivityAdvertiser_h
@import Foundation;

#include "SFXPCClient.h"
#include "SFActivityAdvertiserClient-Protocol.h"

@class NSString;
@protocol SFActivityAdvertiserDelegate;

@interface SFActivityAdvertiser : SFXPCClient<SFActivityAdvertiserClient>

@property NSObject<SFActivityAdvertiserDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedAdvertiser;

/* instance methods */
- (id)init;
- (void)_getRemoteObjectProxyOnQueue:(id /* block */)queue;
- (void)fetchLoginIDWithCompletionHandler:(id /* block */)handler;
- (void)fetchSFPeerDevicesWithCompletionHandler:(id /* block */)handler;
- (void)fetchPeerForUUID:(id)uuid withCompletionHandler:(id /* block */)handler;
- (void)advertiseAdvertisementPayload:(id)payload options:(id)options;
- (void)activityPayloadForAdvertisementPayload:(id)payload command:(id)command requestedByDevice:(id)device withCompletionHandler:(id /* block */)handler;
- (void)didSendPayloadForActivityIdentifier:(id)identifier toDevice:(id)device error:(id)error;
- (void)pairedDevicesChanged:(id)changed;
- (id)machServiceName;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (BOOL)shouldEscapeXpcTryCatch;
@end

#endif /* SFActivityAdvertiser_h */
