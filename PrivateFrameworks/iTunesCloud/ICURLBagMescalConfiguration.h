//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICURLBagMescalConfiguration_h
#define ICURLBagMescalConfiguration_h
@import Foundation;

@class NSArray;

@interface ICURLBagMescalConfiguration : NSObject

@property (nonatomic) BOOL shouldSignBody;
@property (nonatomic) BOOL shouldIncludePath;
@property (copy, nonatomic) NSArray *fields;
@property (copy, nonatomic) NSArray *headers;

/* instance methods */
- (id)description;
@end

#endif /* ICURLBagMescalConfiguration_h */
