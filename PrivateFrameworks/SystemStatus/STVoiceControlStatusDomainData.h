//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STVoiceControlStatusDomainData_h
#define STVoiceControlStatusDomainData_h
@import Foundation;

#include "BSDebugDescriptionProviding-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "STStatusDomainData-Protocol.h"
#include "STStatusDomainDataDifferencing-Protocol.h"

@class NSString;

@interface STVoiceControlStatusDomainData : NSObject<BSDebugDescriptionProviding, STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (readonly, nonatomic) BOOL voiceControlActive;
@property (readonly, nonatomic) unsigned long long listeningState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)debugDescriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)diffFromData:(id)data;
- (id)dataByApplyingDiff:(id)diff;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isVoiceControlActive;
@end

#endif /* STVoiceControlStatusDomainData_h */
