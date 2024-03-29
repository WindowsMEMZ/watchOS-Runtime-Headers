//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNMultiValuePropertyDescription_h
#define CNMultiValuePropertyDescription_h
@import Foundation;

#include "CNPropertyDescription.h"

@class NSArray;

@interface CNMultiValuePropertyDescription : CNPropertyDescription

@property (readonly, nonatomic) Class valueClass;
@property (readonly, nonatomic) BOOL isSingleValue;
@property (readonly, nonatomic) BOOL isMultiValue;
@property (readonly, nonatomic) NSArray *standardLabels;
@property (readonly, nonatomic) NSArray *managedLabels;
@property (readonly, nonatomic) Class labeledValueClass;
@property (readonly, nonatomic) id /* block */ plistTransform;
@property (readonly, nonatomic) id /* block */ fromPlistTransform;

/* instance methods */
- (unsigned int)abPropertyType;
- (void *)ABValueFromCNValue:(id)cnvalue;
- (id)CNValueFromABValue:(void *)abvalue;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)value;
- (id)CNLabeledValueLabelFromABMultiValueLabel:(struct __CFString *)label;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)value;
- (struct __CFString *)ABMultiValueLabelFromCNLabeledValueLabel:(id)label;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)value destinationClass:(Class)class settersByABKeys:(id)abkeys;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)value gettersByABKeys:(id)abkeys;
- (void *)ABMutableMultiValueForABPerson:(void *)abperson;
- (id)CNMutableValueForABMultivalue;
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)bytes length:(unsigned long long)length;
- (BOOL)applyCNValue:(id)cnvalue toArray:(id)array identifier:(id)identifier legacyIdentifier:(int)identifier label:(id)label;
- (BOOL)applyABMultivalueValueBytes:(char *)bytes length:(unsigned long long)length identifier:(id)identifier legacyIdentifier:(int)identifier label:(id)label toCNMultivalueRepresentation:(id)representation;
- (BOOL)applyDictionary:(id)dictionary identifier:(id)identifier legacyIdentifier:(int)identifier label:(id)label toCNMultivalueRepresentation:(id)representation;
- (BOOL)isEqualIgnoringIdentifiersForContact:(id)contact other:(id)other;
- (void)assertValueType:(id)type;
- (BOOL)isValidValue:(id)value error:(id *)error;
- (BOOL)isValidMultiValueValue:(id)value error:(id *)error;
- (id)stringForIndexingForContact:(id)contact;
- (id)valueWithResetIdentifiers:(id)identifiers;
- (id)standardLabelsWithOptions:(unsigned long long)options;
- (id)localizedStringForLabel:(id)label;
@end

#endif /* CNMultiValuePropertyDescription_h */
