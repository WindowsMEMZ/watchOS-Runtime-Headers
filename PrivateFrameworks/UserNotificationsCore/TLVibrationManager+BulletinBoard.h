//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef TLVibrationManager_BulletinBoard_h
#define TLVibrationManager_BulletinBoard_h
@import Foundation;

@interface TLVibrationManager (BulletinBoard)
/* instance methods */
- (BOOL)unc_isVibrationEnabledForSectionInfo:(id)info;
- (BOOL)unc_isVibrationEnabledForAlertType:(long long)type topic:(id)topic;
- (id)unc_vibrationIdentifierForAlertConfiguration:(id)configuration;
- (BOOL)unc_isVibrationEnabledForAlertConfiguration:(id)configuration;
@end

#endif /* TLVibrationManager_BulletinBoard_h */
