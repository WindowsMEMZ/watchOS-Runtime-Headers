//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNContactMultiValueDiffUpdate_h
#define CNContactMultiValueDiffUpdate_h
@import Foundation;

#include "CNContactUpdate.h"
#include "CNMultiValueDiff.h"
#include "CNMultiValuePropertyDescription.h"

@interface CNContactMultiValueDiffUpdate : CNContactUpdate

@property (readonly) CNMultiValuePropertyDescription *property;
@property (readonly) CNMultiValueDiff *diff;

/* instance methods */
- (BOOL)applyToABPerson:(void *)abperson withPropertiesContext:(id)context logger:(id)logger error:(id *)error;
- (id)initWithProperty:(id)property diff:(id)diff;
- (void)applyToMutableContact:(id)contact withIdentifierMap:(id)map;
- (id)description;
@end

#endif /* CNContactMultiValueDiffUpdate_h */
