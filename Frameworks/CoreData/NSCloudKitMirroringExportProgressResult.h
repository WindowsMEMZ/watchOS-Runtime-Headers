//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSCloudKitMirroringExportProgressResult_h
#define NSCloudKitMirroringExportProgressResult_h
@import Foundation;

#include "NSCloudKitMirroringResult.h"

@class NSDictionary;

@interface NSCloudKitMirroringExportProgressResult : NSCloudKitMirroringResult

@property (readonly, nonatomic) NSDictionary *objectIDToLastExportedToken;

/* instance methods */
- (id)initWithRequest:(id)request storeIdentifier:(id)identifier objectIDToLastExportedToken:(id)token error:(id)error;
- (void)dealloc;
@end

#endif /* NSCloudKitMirroringExportProgressResult_h */
