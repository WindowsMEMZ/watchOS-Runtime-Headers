//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef KMFindMySyncDevicesBridge_h
#define KMFindMySyncDevicesBridge_h
@import Foundation;

#include "KMProviderDatasetBridge-Protocol.h"

@class NSString;

@interface KMFindMySyncDevicesBridge : NSObject<KMProviderDatasetBridge>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (long long)itemType;
- (id)originAppId;
- (BOOL)enumerateItemsWithError:(id *)error usingBlock:(id /* block */)block;
@end

#endif /* KMFindMySyncDevicesBridge_h */
