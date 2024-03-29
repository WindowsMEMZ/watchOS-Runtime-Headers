//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 887.3.0.0.0
//
#ifndef BBBulletinRemoveUpdate_h
#define BBBulletinRemoveUpdate_h
@import Foundation;

#include "BBBulletinUpdate.h"

@interface BBBulletinRemoveUpdate : BBBulletinUpdate

@property (readonly, nonatomic) BOOL shouldSync;

/* class methods */
+ (id)updateWithBulletin:(id)bulletin feeds:(unsigned long long)feeds shouldSync:(BOOL)sync;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithBulletin:(id)bulletin feeds:(unsigned long long)feeds shouldSync:(BOOL)sync;
- (id)typeDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* BBBulletinRemoveUpdate_h */
