//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef IDSService_HMDAccounts_h
#define IDSService_HMDAccounts_h
@import Foundation;

@interface IDSService (HMDAccounts) <HMDIDSService>
/* instance methods */
- (BOOL)hmd_isActive;
- (id)hmd_handles;
- (id)hmd_preferredHandle;
@end

#endif /* IDSService_HMDAccounts_h */
