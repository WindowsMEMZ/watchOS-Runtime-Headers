//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNSocialProfilesDescription_h
#define CNSocialProfilesDescription_h
@import Foundation;

#include "CNCompoundMultiValuePropertyDescription.h"
#include "CNAbstractPropertyDescription-Protocol.h"

@class NSString;

@interface CNSocialProfilesDescription : CNCompoundMultiValuePropertyDescription<CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)abPropertyID:(int *)id;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)value;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)value;
- (id)init;
- (BOOL)isEqualForContact:(id)contact other:(id)other;
- (void)encodeUsingCoder:(id)coder contact:(id)contact;
- (void)decodeUsingCoder:(id)coder contact:(id)contact;
- (BOOL)isNonnull;
- (id)CNValueForContact:(id)contact;
- (void)setCNValue:(id)cnvalue onContact:(id)contact;
- (BOOL)canUnifyValue:(id)value withValue:(id)value;
- (Class)labeledValueClass;
- (id /* block */)dictionaryTransform;
- (id /* block */)fromDictionaryTransform;
- (id)summarizationKeys;
@end

#endif /* CNSocialProfilesDescription_h */
