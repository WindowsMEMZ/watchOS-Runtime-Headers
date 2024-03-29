//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXAppRepresentation_h
#define AXAppRepresentation_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface AXAppRepresentation : NSObject<NSSecureCoding>

@property (nonatomic) int pid;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) long long layoutRole;
@property (readonly, nonatomic) BOOL isLayoutPrimary;
@property (readonly, nonatomic) BOOL isLayoutFullscreenModal;

/* class methods */
+ (id)appWithPID:(int)pid bundleID:(id)id;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (void)_commonInit;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* AXAppRepresentation_h */
