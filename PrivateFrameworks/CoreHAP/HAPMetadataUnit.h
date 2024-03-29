//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPMetadataUnit_h
#define HAPMetadataUnit_h
@import Foundation;

#include "HMFObject.h"

@class NSString;

@interface HAPMetadataUnit : HMFObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *unitDescription;

/* class methods */
+ (id)init:(id)init withDictionary:(id)dictionary;

/* instance methods */
- (id)initWithName:(id)name description:(id)description;
- (id)generateDictionary;
- (id)description;
- (void)dump;
@end

#endif /* HAPMetadataUnit_h */
