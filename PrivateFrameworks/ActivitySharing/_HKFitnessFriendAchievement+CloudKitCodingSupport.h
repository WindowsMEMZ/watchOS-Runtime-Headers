//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 752.2.0.0.0
//
#ifndef _HKFitnessFriendAchievement_CloudKitCodingSupport_h
#define _HKFitnessFriendAchievement_CloudKitCodingSupport_h
@import Foundation;

@interface _HKFitnessFriendAchievement (CloudKitCodingSupport) <ASCloudKitCodable>
/* class methods */
+ (id)fitnessFriendAchievementWithRecord:(id)record friendUUID:(id)uuid;
+ (id)fitnessFriendAchievementWithCodableAchievement:(id)achievement;
+ (id)fitnessFriendAchievementWithCodableAchievement:(id)achievement friendUUID:(id)uuid;
+ (id)_fitnessFriendAchievementWithCodableAchievement:(id)achievement friendUUID:(id)uuid;

/* instance methods */
- (id)codableAchievement;
- (id)recordWithZoneID:(id)id;
@end

#endif /* _HKFitnessFriendAchievement_CloudKitCodingSupport_h */
