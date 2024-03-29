//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStatusBarDataNetworkEntry_h
#define _UIStatusBarDataNetworkEntry_h
@import Foundation;

#include "_UIStatusBarDataIntegerEntry.h"

@interface _UIStatusBarDataNetworkEntry : _UIStatusBarDataIntegerEntry

@property (nonatomic) long long status;
@property (nonatomic) BOOL lowDataModeActive;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)_ui_descriptionBuilder;
@end

#endif /* _UIStatusBarDataNetworkEntry_h */
