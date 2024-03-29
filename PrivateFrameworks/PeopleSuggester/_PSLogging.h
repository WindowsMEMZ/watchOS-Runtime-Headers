//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _PSLogging_h
#define _PSLogging_h
@import Foundation;

@interface _PSLogging : NSObject
/* class methods */
+ (id)generalChannel;
+ (id)messagePinningChannel;
+ (id)familyRecommenderChannel;
+ (id)heuristicsChannel;
+ (id)coreBehaviorChannel;
+ (id)knnChannel;
+ (id)feedbackChannel;
+ (id)shareExtensionChannel;
+ (id)contactEmbeddingChannel;
+ (id)featureGenerationChannel;
+ (id)suggestionSignpost;
@end

#endif /* _PSLogging_h */
