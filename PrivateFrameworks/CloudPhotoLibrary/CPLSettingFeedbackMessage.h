//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLSettingFeedbackMessage_h
#define CPLSettingFeedbackMessage_h
@import Foundation;

#include "CPLFeedbackMessage.h"

@class NSString;

@interface CPLSettingFeedbackMessage : CPLFeedbackMessage

@property (readonly, nonatomic) NSString *settingName;
@property (readonly, nonatomic) NSString *value;

/* class methods */
+ (id)feedbackType;

/* instance methods */
- (id)initWithSetting:(id)setting value:(id)value libraryIdentifier:(id)identifier;
- (id)serverMessage;
@end

#endif /* CPLSettingFeedbackMessage_h */
