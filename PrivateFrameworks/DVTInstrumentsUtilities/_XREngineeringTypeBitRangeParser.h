//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef _XREngineeringTypeBitRangeParser_h
#define _XREngineeringTypeBitRangeParser_h
@import Foundation;

#include "XRXMLElementParser.h"

@class NSString;

@interface _XREngineeringTypeBitRangeParser : XRXMLElementParser

@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long start;
@property (nonatomic) long long end;

/* class methods */
+ (id)_elementNameToClassMap;

/* instance methods */
- (void)_handleCompletion;
@end

#endif /* _XREngineeringTypeBitRangeParser_h */
