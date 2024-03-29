//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFUnsupportedContentLocation_h
#define WFUnsupportedContentLocation_h
@import Foundation;

#include "WFContentLocation.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "WFSerializableContent-Protocol.h"

@class NSDictionary, NSString;

@interface WFUnsupportedContentLocation : WFContentLocation<NSSecureCoding, NSCopying, WFSerializableContent>

@property (readonly, nonatomic) NSDictionary *backingSerializedRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)locationWithIdentifier:(id)identifier serializedRepresentation:(id)representation;
+ (BOOL)supportsSecureCoding;
+ (id)objectWithWFSerializedRepresentation:(id)representation;

/* instance methods */
- (id)initWithIdentifier:(id)identifier serializedRepresentation:(id)representation;
- (BOOL)isEqual:(id)equal;
- (id)localizedTitle;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)wfSerializedRepresentation;
@end

#endif /* WFUnsupportedContentLocation_h */
