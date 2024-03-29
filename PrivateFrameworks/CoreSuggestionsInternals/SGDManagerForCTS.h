//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGDManagerForCTS_h
#define SGDManagerForCTS_h
@import Foundation;

#include "SGXPCActivityManagerProtocol-Protocol.h"

@interface SGDManagerForCTS : NSObject {
  /* instance variables */
  NSObject<SGXPCActivityManagerProtocol> *_xpcActivityManager;
}

/* class methods */
+ (id)sharedSingletonInstance;
+ (id)defaultInstance;

/* instance methods */
- (id)initWithHarvestStoreGetter:(id /* block */)getter xpcActivityManager:(id)manager;
- (void)registerForCTS;
- (void)_registerMobileAssetMetadataDownloadActivity;
- (void)_performMobileAssetMetadataDownloadActivity:(id)activity;
- (void)dealloc;
- (void)waitForXpcActivityQueue;
@end

#endif /* SGDManagerForCTS_h */
