//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGModelHyperparameters_h
#define SGModelHyperparameters_h
@import Foundation;

@class NSString;

@interface SGModelHyperparameters : NSObject

@property (readonly, copy, nonatomic) NSString *featuresModelId;
@property (readonly, copy, nonatomic) NSString *featuresVersion;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } characterNGramRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } tokenNGramRange;
@property (readonly, nonatomic) unsigned long long vectorLength;
@property (readonly, nonatomic) unsigned long long idVectorLength;
@property (readonly, nonatomic) unsigned long long extraIdOptions;
@property (readonly, nonatomic) unsigned long long vectorizerStrategy;
@property (readonly, nonatomic) long long vectorNormalization;

/* class methods */
+ (unsigned long long)strategyForString:(id)string modelTypeName:(id)name;

/* instance methods */
- (id)initWithDictionary:(id)dictionary modelTypeName:(id)name;
- (id)sessionDescriptorForLanguage:(id)language;
@end

#endif /* SGModelHyperparameters_h */
