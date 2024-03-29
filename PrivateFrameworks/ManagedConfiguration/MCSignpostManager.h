//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef MCSignpostManager_h
#define MCSignpostManager_h
@import Foundation;

@interface MCSignpostManager : NSObject
/* class methods */
+ (void)willGetFeature:(id)feature;
+ (void)willSetFeature:(id)feature;
+ (void)willPostEffectiveSettingsChangedNotification;
+ (id)signpostsForTypeFilter:(unsigned long long)filter featureFilter:(id)filter duration:(double)duration error:(id *)error;
@end

#endif /* MCSignpostManager_h */
