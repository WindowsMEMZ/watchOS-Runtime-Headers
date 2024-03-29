//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFSymptomResultContextProviding_Protocol_h
#define HFSymptomResultContextProviding_Protocol_h
@import Foundation;

@protocol HFSymptomResultContextProviding <NSObject>

@property (readonly, copy, nonatomic) NSString *homeKitObjectName;
@property (readonly, copy, nonatomic) NSString *accessoryName;
@property (readonly, copy, nonatomic) NSString *accessoryCategory;
@property (readonly, copy, nonatomic) NSString *detailedErrorDescriptionForiCloudSymptom;
@property (readonly, copy, nonatomic) NSUUID *accessoryUUID;
@property (readonly, copy, nonatomic) NSString *currentDeviceNetworkSSID;
@property (readonly, copy, nonatomic) NSString *accessoryNetworkSSID;
@property (readonly, copy, nonatomic) NSString *currentUserID;
@property (readonly, copy, nonatomic) NSString *currentAppleMusicAccountName;

/* instance methods */
- (BOOL)shouldDisplayManualFixOptionForSymptom:(id)symptom;
- (long long)fixStateForSymptom:(id)symptom;
@end

#endif /* HFSymptomResultContextProviding_Protocol_h */
