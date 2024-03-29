//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSStringCacheController_h
#define TPSStringCacheController_h
@import Foundation;

#include "TPSDataCacheController.h"

@interface TPSStringCacheController : TPSDataCacheController
/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)newDataCache;
- (id)formattedDataWithFileURL:(id)url;
- (id)formattedDataWithData:(id)data;
- (BOOL)isURLValid:(id)urlvalid;
- (void)formattedDataWithFileURL:(id)url completionHandler:(id /* block */)handler;
@end

#endif /* TPSStringCacheController_h */
