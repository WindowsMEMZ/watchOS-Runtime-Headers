//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDFitnessMachineConnection_h
#define HDFitnessMachineConnection_h
@import Foundation;

@class NSUUID;
@protocol HKFitnessMachineConnectionClientInterface;

@interface HDFitnessMachineConnection : NSObject

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSObject<HKFitnessMachineConnectionClientInterface> *client;

/* instance methods */
- (id)initWithUUID:(id)uuid client:(id)client;
@end

#endif /* HDFitnessMachineConnection_h */
