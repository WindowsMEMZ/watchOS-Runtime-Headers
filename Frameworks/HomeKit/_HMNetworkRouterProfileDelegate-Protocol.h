//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef _HMNetworkRouterProfileDelegate_Protocol_h
#define _HMNetworkRouterProfileDelegate_Protocol_h
@import Foundation;

@protocol _HMNetworkRouterProfileDelegate <NSObject>
/* instance methods */
- (void)routerProfileDidUpdateNetworkStatus:(id)status;
- (void)routerProfileDidUpdateIdentifiersForSatellites:(id)satellites;
@end

#endif /* _HMNetworkRouterProfileDelegate_Protocol_h */
