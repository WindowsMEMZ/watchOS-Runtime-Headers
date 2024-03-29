//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMMTRFabricDelegate_Protocol_h
#define HMMTRFabricDelegate_Protocol_h
@import Foundation;

@protocol HMMTRFabricDelegate <NSObject>
/* instance methods */
- (BOOL)isPrimaryResidentNodeReachableAndThreadCapable;
- (BOOL)isPrimaryResidentNodeReachable;
- (BOOL)isCurrentUserOwner;
- (id)accessoryAdministerPrivilegeCATID:(BOOL)catid;
- (id)accessoryOperatePrivilegeCATID:(BOOL)catid;
- (void)incrementOperatePrivilegeCATVersion:(id /* block */)catversion;
- (void)updateUserCATWithOperatePrivilege:(id)privilege administerPrivilege:(id)privilege;
@end

#endif /* HMMTRFabricDelegate_Protocol_h */
