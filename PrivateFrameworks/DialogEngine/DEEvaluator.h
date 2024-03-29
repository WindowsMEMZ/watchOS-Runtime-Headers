//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.12.1.0.0
//
#ifndef DEEvaluator_h
#define DEEvaluator_h
@import Foundation;

@class NSString;

@interface DEEvaluator : NSObject

@property (retain, nonatomic) NSString *templateDir;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) id globalParameters;
@property (retain, nonatomic) NSString *typeName;
@property (retain, nonatomic) NSString *propName;
@property (retain, nonatomic) id parameters;
@property (retain, nonatomic) id userSettings;

/* instance methods */
- (id)evaluate;
@end

#endif /* DEEvaluator_h */
