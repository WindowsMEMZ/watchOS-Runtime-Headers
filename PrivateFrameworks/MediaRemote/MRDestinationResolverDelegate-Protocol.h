//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRDestinationResolverDelegate_Protocol_h
#define MRDestinationResolverDelegate_Protocol_h
@import Foundation;

@protocol MRDestinationResolverDelegate <NSObject>
@optional
/* instance methods */
- (void)destinationResolver:(id)resolver endpointDidChange:(id)change;
- (void)destinationResolver:(id)resolver originDidChange:(id)change;
- (void)destinationResolver:(id)resolver playerPathDidChange:(id)change;
- (void)destinationResolverDestinationDidInvalidate:(id)invalidate;
- (void)destinationResolver:(id)resolver didFailWithError:(id)error;
@end

#endif /* MRDestinationResolverDelegate_Protocol_h */
