//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INAppIntentDescriptor_h
#define INAppIntentDescriptor_h
@import Foundation;

#include "INAppDescriptor.h"
#include "NSSecureCoding-Protocol.h"

@class NSSet, NSString;

@interface INAppIntentDescriptor : INAppDescriptor<NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *intentIdentifier;
@property (readonly, nonatomic) NSSet *supportedEntities;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIntentIdentifier:(id)identifier applicationRecord:(id)record;
- (id)initWithIntentIdentifier:(id)identifier applicationRecord:(id)record supportedAppIntents:(id)intents supportedEntities:(id)entities;
- (id)initWithIntentIdentifier:(id)identifier localizedName:(id)name bundleIdentifier:(id)identifier extensionBundleIdentifier:(id)identifier counterpartIdentifiers:(id)identifiers teamIdentifier:(id)identifier supportedIntents:(id)intents supportedEntities:(id)entities bundleURL:(id)url documentTypes:(id)types;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* INAppIntentDescriptor_h */
