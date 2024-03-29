//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStatusBarDataWifiEntry_h
#define _UIStatusBarDataWifiEntry_h
@import Foundation;

#include "_UIStatusBarDataNetworkEntry.h"

@interface _UIStatusBarDataWifiEntry : _UIStatusBarDataNetworkEntry

@property (nonatomic) long long type;

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

#endif /* _UIStatusBarDataWifiEntry_h */
