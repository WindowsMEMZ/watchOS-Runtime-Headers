//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef IPAAutoSettings_Protocol_h
#define IPAAutoSettings_Protocol_h
@import Foundation;

#include "IPAAutoSettings-Protocol.h"

@class NSString;

@protocol IPAAutoSettings <NSObject>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL pending;

/* instance methods */
- (BOOL)applyArchiveDictionary:(id)dictionary;
- (id)archiveDictionary;
@end

#endif /* IPAAutoSettings_Protocol_h */
