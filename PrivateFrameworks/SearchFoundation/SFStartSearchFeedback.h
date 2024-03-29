//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFStartSearchFeedback_h
#define SFStartSearchFeedback_h
@import Foundation;

#include "SFFeedback.h"

@class NSString;

@interface SFStartSearchFeedback : SFFeedback

@property (retain, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *input;
@property (nonatomic) unsigned long long triggerEvent;
@property (nonatomic) unsigned long long searchType;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithInput:(id)input triggerEvent:(unsigned long long)event;
- (id)initWithInput:(id)input triggerEvent:(unsigned long long)event queryId:(unsigned long long)id;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* SFStartSearchFeedback_h */
