//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNMCProfileConnection_h
#define CNMCProfileConnection_h
@import Foundation;

#include "CNMCProfileConnection-Protocol.h"

@class NSString;

@interface CNMCProfileConnection : NSObject<CNMCProfileConnection>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)defaultAppBundleIDForCommunicationServiceType:(id)type forAccountWithIdentifier:(id)identifier;
- (BOOL)communicationServiceRulesExistForBundleID:(id)id forCommunicationServiceType:(id)type;
- (id)observableForManagedConfigChanged;
@end

#endif /* CNMCProfileConnection_h */
