//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STTelephonyStatusDomainSIMInfoDiff_h
#define STTelephonyStatusDomainSIMInfoDiff_h
@import Foundation;

#include "BSDebugDescriptionProviding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "STStatusDomainDataDiff-Protocol.h"

@class BSSettings, NSString;

@interface STTelephonyStatusDomainSIMInfoDiff : NSObject<BSDebugDescriptionProviding, STStatusDomainDataDiff, NSCopying> {
  /* instance variables */
  BSSettings *_changes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL empty;

/* class methods */
+ (id)diffFromInfo:(id)info toInfo:(id)info;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)infoByApplyingToInfo:(id)info;
- (void)applyToMutableInfo:(id)info;
- (BOOL)isEmpty;
- (id)diffByApplyingDiff:(id)diff;
- (BOOL)isOrthogonalToDiff:(id)diff;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)debugDescriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* STTelephonyStatusDomainSIMInfoDiff_h */
