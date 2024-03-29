//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4416.36.0.0.0
//
#ifndef SBSBackgroundActivityAssertionData_h
#define SBSBackgroundActivityAssertionData_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSSet, NSString;

@interface SBSBackgroundActivityAssertionData : NSObject<NSSecureCoding, BSDescriptionProviding>

@property (copy, nonatomic) NSSet *backgroundActivityIdentifiers;
@property (nonatomic) int pid;
@property (nonatomic) BOOL exclusive;
@property (nonatomic) BOOL showsWhenForeground;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *statusString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithBackgroundActivityIdentifiers:(id)identifiers forPID:(int)pid exclusive:(BOOL)exclusive showsWhenForeground:(BOOL)foreground;
- (id)initWithBackgroundActivityIdentifiers:(id)identifiers forPID:(int)pid exclusive:(BOOL)exclusive showsWhenForeground:(BOOL)foreground uniqueIdentifier:(id)identifier;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (BOOL)isExclusive;
@end

#endif /* SBSBackgroundActivityAssertionData_h */
