//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFDateFieldParameter_h
#define WFDateFieldParameter_h
@import Foundation;

#include "WFTextInputParameter.h"
#include "WFParameterDialogProvider-Protocol.h"

@class NSDateFormatter, NSNumber, NSString;

@interface WFDateFieldParameter : WFTextInputParameter<WFParameterDialogProvider>

@property (readonly, nonatomic) NSString *hintDateMode;
@property (readonly, nonatomic) NSNumber *dateFormatterDateStyleNumber;
@property (readonly, nonatomic) NSNumber *dateFormatterTimeStyleNumber;
@property (readonly, nonatomic) NSNumber *dateFormatterRelativeDateFormattingNumber;
@property (readonly, copy, nonatomic) NSString *dateFormatterTemplateString;
@property (readonly, nonatomic) NSString *resultType;
@property (readonly, nonatomic) NSString *reactiveParameterKey;
@property (readonly, nonatomic) NSString *localizedIncompleteHintString;
@property (readonly, nonatomic) BOOL timeOnlyMode;
@property (readonly, nonatomic) BOOL dateOnlyMode;
@property (readonly, nonatomic) BOOL detectsAllDayDates;
@property (readonly, nonatomic) BOOL displaysAllDayString;
@property (nonatomic) BOOL forcesAllDayDates;
@property (readonly, nonatomic) NSDateFormatter *hintDateFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (Class)singleStateClass;
- (id)initWithDefinition:(id)definition;
- (id)hintForState:(id)state;
- (id)datePickerConfiguration;
- (id)dateFormatterForConfiguration:(id)configuration;
- (void)createDialogRequestWithAttribution:(id)attribution defaultState:(id)state prompt:(id)prompt completionHandler:(id /* block */)handler;
- (id)parameterStateFromDialogResponse:(id)response;
@end

#endif /* WFDateFieldParameter_h */
