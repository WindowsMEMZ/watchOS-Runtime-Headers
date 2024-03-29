//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFCallStateSnapshot_h
#define AFCallStateSnapshot_h
@import Foundation;

#include "AFContextSnapshot-Protocol.h"
#include "AFDictionaryConvertible-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface AFCallStateSnapshot : NSObject<AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long callState;
@property (readonly, nonatomic) BOOL onSpeaker;
@property (readonly, nonatomic) BOOL isDropInCall;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)newWithBuilder:(id /* block */)builder;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)serializedBackingStore;
- (id)initWithSerializedBackingStore:(id)store;
- (id)ad_shortDescription;
- (id)mutatedCopyWithMutator:(id /* block */)mutator;
- (id)initWithBuilder:(id /* block */)builder;
- (id)init;
- (id)initWithCallState:(unsigned long long)state onSpeaker:(BOOL)speaker isDropInCall:(BOOL)call;
- (id)_descriptionWithIndent:(unsigned long long)indent;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)buildDictionaryRepresentation;
@end

#endif /* AFCallStateSnapshot_h */
