//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncStateEntity_Protocol_h
#define HDCloudSyncStateEntity_Protocol_h
@import Foundation;

@protocol HDCloudSyncStateEntity <NSObject>
/* class methods */
+ (BOOL)updateDataWithStateStorage:(id)storage transaction:(id)transaction error:(id *)error;
+ (void)syncDidFinishWithResult:(long long)result stateStore:(id)store profile:(id)profile;
+ (id)stateEntitySchema;
@end

#endif /* HDCloudSyncStateEntity_Protocol_h */
