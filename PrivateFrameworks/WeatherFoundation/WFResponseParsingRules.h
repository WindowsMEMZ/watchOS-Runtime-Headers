//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFResponseParsingRules_h
#define WFResponseParsingRules_h
@import Foundation;

#include "WFSettings-Protocol.h"

@interface WFResponseParsingRules : NSObject

@property (readonly, nonatomic) NSObject<WFSettings> *settings;

/* class methods */
+ (BOOL)aqiEnabledByRules:(id)rules forLocation:(id)location;

/* instance methods */
- (id)initWithSettings:(id)settings;
- (BOOL)aqiEnabledForCountryCode:(id)code;
@end

#endif /* WFResponseParsingRules_h */
