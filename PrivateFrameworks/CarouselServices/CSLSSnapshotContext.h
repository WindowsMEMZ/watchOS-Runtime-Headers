//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSSnapshotContext_h
#define CSLSSnapshotContext_h
@import Foundation;

#include "BSXPCCoding-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary, NSString;

@interface CSLSSnapshotContext : NSObject<BSXPCCoding, NSSecureCoding>

@property (readonly, nonatomic) NSDate *staleDate;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) BOOL atGlanceableUI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)snapshotContextWithStaleDate:(id)date userInfo:(id)info atGlanceableUI:(BOOL)ui;
+ (id)snapshotContextWithStaleDate:(id)date uuid:(id)uuid userInfo:(id)info atGlanceableUI:(BOOL)ui;
+ (id)alwaysValidSnapshotContext;
+ (id)invalidSnapshotContext;
+ (id)fromSettings:(id)settings;
+ (id)defaultStaleDate;
+ (unsigned long long)maxUserInfoSize;
+ (BOOL)checkUserInfoSize:(id)size;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithStaleDate:(id)date userInfo:(id)info atGlanceableUI:(BOOL)ui;
- (id)initWithStaleDate:(id)date uuid:(id)uuid userInfo:(id)info atGlanceableUI:(BOOL)ui;
- (id)initWithXPCDictionary:(id)xpcdictionary;
- (void)encodeWithXPCDictionary:(id)xpcdictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)succinctDescriptionBuilder;
- (BOOL)isAtGlanceableUI;
@end

#endif /* CSLSSnapshotContext_h */
