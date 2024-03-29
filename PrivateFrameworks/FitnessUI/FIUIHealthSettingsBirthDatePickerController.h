//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIHealthSettingsBirthDatePickerController_h
#define FIUIHealthSettingsBirthDatePickerController_h
@import Foundation;

#include "FIUIHealthSettingsDatePicker.h"
#include "FIUIHealthSettingsForceUpdatable-Protocol.h"

@class NSString;

@interface FIUIHealthSettingsBirthDatePickerController : NSObject<FIUIHealthSettingsForceUpdatable>

@property (retain, nonatomic) FIUIHealthSettingsDatePicker *datePickerView;
@property (copy, nonatomic) id /* block */ dateOfBirthUpdateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)setDateOfBirth:(id)birth;
- (void)forceUpdate;
@end

#endif /* FIUIHealthSettingsBirthDatePickerController_h */
