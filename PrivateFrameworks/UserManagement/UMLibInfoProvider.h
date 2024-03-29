//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 384.60.3.0.0
//
#ifndef UMLibInfoProvider_h
#define UMLibInfoProvider_h
@import Foundation;

#include "UMLibInfoProviding-Protocol.h"

@class NSString;

@interface UMLibInfoProvider : NSObject<UMLibInfoProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)passwdForUID:(unsigned int)uid error:(id *)error;
@end

#endif /* UMLibInfoProvider_h */
