//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 217.20.3.0.0
//
#ifndef ANHomeContext_h
#define ANHomeContext_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface ANHomeContext : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *homeName;
@property (retain, nonatomic) NSArray *zoneNames;
@property (retain, nonatomic) NSArray *roomNames;
@property (nonatomic) BOOL isEmpty;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* ANHomeContext_h */
