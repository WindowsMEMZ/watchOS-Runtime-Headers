//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STStatusBarDataNetworkEntry_h
#define STStatusBarDataNetworkEntry_h
@import Foundation;

#include "STStatusBarDataIntegerEntry.h"

@interface STStatusBarDataNetworkEntry : STStatusBarDataIntegerEntry

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) BOOL lowDataModeActive;

/* class methods */
+ (id)entryWithStatus:(long long)status lowDataMode:(BOOL)mode rawValue:(long long)value displayValue:(long long)value displayRawValue:(BOOL)value;
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)succinctDescriptionBuilder;
- (id)_equalsBuilderWithObject:(id)object;
- (id)_hashBuilder;
- (void)encodeWithBSXPCCoder:(id)bsxpccoder;
- (id)initWithBSXPCCoder:(id)bsxpccoder;
@end

#endif /* STStatusBarDataNetworkEntry_h */
