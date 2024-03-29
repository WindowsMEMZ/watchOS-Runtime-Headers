//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSensorActivityStylePolicy_h
#define CSLSensorActivityStylePolicy_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "CSLSensorActivityStyleAttributes.h"
#include "CSLSensorActivityStylePolicy-Protocol.h"
#include "CSLSensorActivityStylePolicyDelegate-Protocol.h"

@class NSString;

@interface CSLSensorActivityStylePolicy : NSObject<CSLSensorActivityStylePolicy, BSDescriptionProviding> {
  /* instance variables */
  unsigned long long _updateCount;
  CSLSensorActivityStyleAttributes *_effectiveAttributesAtStartOfStateUpdate;
}

@property (readonly, copy, nonatomic) CSLSensorActivityStyleAttributes *preferredStyleAttributes;
@property (copy, nonatomic) CSLSensorActivityStyleAttributes *styleAttributes;
@property (nonatomic) BOOL enabled;
@property (weak, nonatomic) NSObject<CSLSensorActivityStylePolicyDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)updateStateWithBlock:(id /* block */)block;
- (void)_notifyDelegateOfUpdate;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (BOOL)isEnabled;
@end

#endif /* CSLSensorActivityStylePolicy_h */
