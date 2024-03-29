//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAppleMediaAccessoryLocalMessageHandler_h
#define HMDAppleMediaAccessoryLocalMessageHandler_h
@import Foundation;

#include "HMDAppleMediaAccessoryLocalMessageHandlerDataSource-Protocol.h"
#include "HMDAssistantSettingsConnection.h"
#include "HMFLogging-Protocol.h"

@class NSString, NSUUID;

@interface HMDAppleMediaAccessoryLocalMessageHandler : NSObject<HMFLogging>

@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMDAssistantSettingsConnection *assistantSettingsConnection;
@property (weak) NSObject<HMDAppleMediaAccessoryLocalMessageHandlerDataSource> *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithIdentifier:(id)identifier assistantSettingsConnection:(id)connection;
- (void)handleSiriEndpointDeleteSiriHistoryMessage:(id)message;
- (id)dataSourceAccessoryWithUUID:(id)uuid;
- (id)logIdentifier;
@end

#endif /* HMDAppleMediaAccessoryLocalMessageHandler_h */
