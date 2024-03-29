//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMListSortDescriptor_h
#define REMListSortDescriptor_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface REMListSortDescriptor : NSObject<NSSecureCoding>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL ascending;

/* class methods */
+ (id)sortDescriptorSortingByNameAscending:(BOOL)ascending;
+ (id)sortDescriptorSortingByOrderingInAccountAscending:(BOOL)ascending;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithType:(long long)type ascending:(BOOL)ascending;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* REMListSortDescriptor_h */
