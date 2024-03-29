//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKPlayerEmailInternal_h
#define GKPlayerEmailInternal_h
@import Foundation;

#include "GKInternalRepresentation.h"

@class NSString;

@interface GKPlayerEmailInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *addressSHA1;
@property (retain, nonatomic) NSString *addressPrefix;
@property (nonatomic) BOOL verified;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* GKPlayerEmailInternal_h */
