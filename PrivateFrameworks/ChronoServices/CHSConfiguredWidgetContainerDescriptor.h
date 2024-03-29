//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHSConfiguredWidgetContainerDescriptor_h
#define CHSConfiguredWidgetContainerDescriptor_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "CHSConfiguredWidgetDescriptor.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface CHSConfiguredWidgetContainerDescriptor : NSObject<BSDescriptionProviding, NSCopying, NSSecureCoding> {
  /* instance variables */
  NSString *_activeWidgetUniqueIdentifier;
  long long _activeWidgetIndex;
}

@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSArray *widgets;
@property (readonly, nonatomic) long long family;
@property (readonly, nonatomic) long long location;
@property (readonly, nonatomic) BOOL canAppearInSecureEnvironment;
@property (readonly, nonatomic) unsigned long long page;
@property (readonly, nonatomic) CHSConfiguredWidgetDescriptor *activeWidget;
@property (readonly, nonatomic) BOOL stack;
@property (readonly, nonatomic) BOOL isSystemConfigured;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)new;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithUniqueIdentifier:(id)identifier location:(long long)location page:(unsigned long long)page family:(long long)family widgets:(id)widgets activeWidget:(id)widget;
- (id)initWithUniqueIdentifier:(id)identifier location:(long long)location canAppearInSecureEnvironment:(BOOL)environment page:(unsigned long long)page family:(long long)family widgets:(id)widgets activeWidget:(id)widget;
- (BOOL)isEqual:(id)equal;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isStack;
@end

#endif /* CHSConfiguredWidgetContainerDescriptor_h */
