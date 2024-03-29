//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.40.9.0.0
//
#ifndef IXCoordinatorWithPlaceholderPromise_Protocol_h
#define IXCoordinatorWithPlaceholderPromise_Protocol_h
@import Foundation;

@protocol IXCoordinatorWithPlaceholderPromise <NSObject>

@property (readonly, nonatomic) BOOL hasPlaceholderPromise;

/* instance methods */
- (BOOL)setPlaceholderPromise:(id)promise error:(id *)error;
- (id)placeholderPromiseWithError:(id *)error;
@end

#endif /* IXCoordinatorWithPlaceholderPromise_Protocol_h */
