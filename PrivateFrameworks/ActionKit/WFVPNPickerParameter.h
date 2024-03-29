//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFVPNPickerParameter_h
#define WFVPNPickerParameter_h
@import Foundation;

#include "WFDynamicEnumerationParameter.h"
#include "WFDynamicEnumerationDataSource-Protocol.h"

@class NSString;

@interface WFVPNPickerParameter : WFDynamicEnumerationParameter<WFDynamicEnumerationDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDefinition:(id)definition;
- (Class)singleStateClass;
- (id)enumeration:(id)enumeration localizedLabelForPossibleState:(id)state;
- (id)enumeration:(id)enumeration localizedSubtitleLabelForPossibleState:(id)state;
- (id)accessoryIconForPossibleState:(id)state;
- (BOOL)enumerationAllowsMultipleValues:(id)values;
- (void)loadPossibleStatesForEnumeration:(id)enumeration searchTerm:(id)term completionHandler:(id /* block */)handler;
@end

#endif /* WFVPNPickerParameter_h */
