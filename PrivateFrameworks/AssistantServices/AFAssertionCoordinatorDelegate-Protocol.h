//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFAssertionCoordinatorDelegate_Protocol_h
#define AFAssertionCoordinatorDelegate_Protocol_h
@import Foundation;

@protocol AFAssertionCoordinatorDelegate <NSObject>
/* instance methods */
- (void)assertionCoordinator:(id)coordinator didAddAssertion:(id)assertion isFirstAssertion:(BOOL)assertion;
- (void)assertionCoordinator:(id)coordinator didActivateAssertion:(id)assertion isFirstAssertion:(BOOL)assertion;
- (void)assertionCoordinator:(id)coordinator didDeactivateAssertion:(id)assertion isLastAssertion:(BOOL)assertion;
- (void)assertionCoordinator:(id)coordinator didRemoveAssertion:(id)assertion isLastAssertion:(BOOL)assertion;
@end

#endif /* AFAssertionCoordinatorDelegate_Protocol_h */
