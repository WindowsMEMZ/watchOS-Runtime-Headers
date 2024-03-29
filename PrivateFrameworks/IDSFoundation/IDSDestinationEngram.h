//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSDestinationEngram_h
#define IDSDestinationEngram_h
@import Foundation;

#include "IDSDestination.h"

@class ENGroup;

@interface IDSDestinationEngram : IDSDestination

@property (readonly, retain, nonatomic) ENGroup *underlyingGroup;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithENGroup:(id)engroup;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)destinationURIs;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* IDSDestinationEngram_h */
