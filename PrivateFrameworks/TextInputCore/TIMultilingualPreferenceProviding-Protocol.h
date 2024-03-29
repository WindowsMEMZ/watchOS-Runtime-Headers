//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIMultilingualPreferenceProviding_Protocol_h
#define TIMultilingualPreferenceProviding_Protocol_h
@import Foundation;

@protocol TIMultilingualPreferenceProviding <NSObject>

@property (readonly, nonatomic) TIInputMode *preferredSecondaryInputMode;
@property (readonly, nonatomic) NSArray *userEnabledInputModes;
@property (readonly, nonatomic) NSArray *userPreferredLanguages;

@end

#endif /* TIMultilingualPreferenceProviding_Protocol_h */
