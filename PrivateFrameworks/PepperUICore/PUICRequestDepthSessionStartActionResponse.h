//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICRequestDepthSessionStartActionResponse_h
#define PUICRequestDepthSessionStartActionResponse_h
@import Foundation;

#include "BSActionResponse.h"

@interface PUICRequestDepthSessionStartActionResponse : BSActionResponse

@property (readonly, nonatomic) long long result;

/* instance methods */
- (id)initWithResult:(long long)result;
- (id)settings:(id)settings keyDescriptionForSetting:(unsigned long long)setting;
- (id)settings:(id)settings valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
@end

#endif /* PUICRequestDepthSessionStartActionResponse_h */
