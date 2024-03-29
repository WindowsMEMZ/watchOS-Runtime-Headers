//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFHMHomeAreaDescriptor_h
#define WFHMHomeAreaDescriptor_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString, NSUUID;

@interface WFHMHomeAreaDescriptor : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSUUID *homeIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long areaType;
@property (readonly, nonatomic) NSString *homeName;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithUniqueIdentifier:(id)identifier homeIdentifier:(id)identifier name:(id)name areaType:(unsigned long long)type homeName:(id)name;
- (id)initWithHome:(id)home;
- (id)initWithZone:(id)zone inHome:(id)home;
- (id)initWithRoom:(id)room inHome:(id)home;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* WFHMHomeAreaDescriptor_h */
