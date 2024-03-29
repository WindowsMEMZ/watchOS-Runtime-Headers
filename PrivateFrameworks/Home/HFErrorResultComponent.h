//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFErrorResultComponent_h
#define HFErrorResultComponent_h
@import Foundation;

#include "HFItemResultComponent.h"

@class HMSymptom, NSString, NSURL;

@interface HFErrorResultComponent : HFItemResultComponent

@property (readonly, nonatomic) unsigned long long category;
@property (retain, nonatomic) HMSymptom *underlyingSymptom;
@property (copy, nonatomic) NSString *errorDescription;
@property (copy, nonatomic) NSString *detailedErrorDescription;
@property (nonatomic) long long displayPriority;
@property (nonatomic) unsigned long long badgeType;
@property (nonatomic) unsigned long long descriptionBadgeType;
@property (copy, nonatomic) NSString *errorMessageTitle;
@property (copy, nonatomic) NSString *errorMessageButtonTitle;
@property (copy, nonatomic) NSURL *errorHandlerURL;
@property (copy, nonatomic) NSString *errorHandlerURLText;
@property (nonatomic) BOOL updateInProgress;

/* class methods */
+ (id)componentForDisplayError:(id)error symptomContextProvider:(id)provider;
+ (id)componentForUnreachableAccessoryWithContextProvider:(id)provider;
+ (id)componentForWriteErrorForCharacteristics:(id)characteristics valueSource:(id)source;
+ (id)componentForAccessoryReprovisionState:(unsigned long long)state;
+ (id)componentForSymptom:(id)symptom contextProvider:(id)provider;
+ (long long)_displayPriorityForSymptom:(id)symptom;
+ (BOOL)_requiresManualFixOptionToDisplaySymptom:(id)symptom;
+ (long long)priorityForCategory:(unsigned long long)category;

/* instance methods */
- (void)_addAccountSymptomMessageForAccountName:(id)name symptom:(id)symptom;
- (id)init;
- (id)initWithCategory:(unsigned long long)category;
- (long long)componentPriority;
- (id)results;
- (id)description;
@end

#endif /* HFErrorResultComponent_h */
