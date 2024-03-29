//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLPRFStingConfigurationProviding_Protocol_h
#define CSLPRFStingConfigurationProviding_Protocol_h
@import Foundation;

@protocol CSLPRFStingConfigurationProviding <NSObject>

@property (readonly, nonatomic) unsigned long long actionType;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *workoutIdentifier;
@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) BOOL enabled;

/* instance methods */
- (void)setDelegate:(id)delegate;
- (BOOL)isEnabled;
@optional
/* instance methods */
- (void)reset;
@end

#endif /* CSLPRFStingConfigurationProviding_Protocol_h */
