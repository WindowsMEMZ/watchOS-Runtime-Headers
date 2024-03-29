//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFAccountContentLocation_h
#define WFAccountContentLocation_h
@import Foundation;

#include "WFAppContentLocation.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "WFSerializableContent-Protocol.h"

@class NSString;

@interface WFAccountContentLocation : WFAppContentLocation<NSSecureCoding, NSCopying, WFSerializableContent>

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)locationWithAccountIdentifier:(id)identifier appDescriptor:(id)descriptor;
+ (id)locationWithAccountIdentifier:(id)identifier appDescriptor:(id)descriptor promptingBehaviour:(unsigned long long)behaviour;
+ (id)locationWithAccountIdentifier:(id)identifier appDescriptor:(id)descriptor managedLevel:(unsigned long long)level;
+ (id)locationWithAccountIdentifier:(id)identifier appDescriptor:(id)descriptor managedLevel:(unsigned long long)level promptingBehaviour:(unsigned long long)behaviour;
+ (BOOL)supportsSecureCoding;
+ (id)objectWithWFSerializedRepresentation:(id)representation;

/* instance methods */
- (id)initWithAccountIdentifier:(id)identifier appDescriptor:(id)descriptor serializedAppDescriptor:(id)descriptor managedLevel:(unsigned long long)level promptingBehaviour:(unsigned long long)behaviour;
- (id)appContentLocation;
- (id)localizedMDMDescription;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)wfSerializedRepresentation;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* WFAccountContentLocation_h */
