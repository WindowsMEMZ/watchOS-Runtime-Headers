//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _PSKNNModelConfiguration_h
#define _PSKNNModelConfiguration_h
@import Foundation;

@class NSArray, NSString;

@interface _PSKNNModelConfiguration : NSObject

@property (retain, nonatomic) NSArray *interactionCountMaxDepths;
@property (retain, nonatomic) NSArray *interactionMechanisms;
@property (retain, nonatomic) NSArray *interactionHistoryRelativeStartDates;
@property (retain, nonatomic) NSArray *bundleIds;
@property (nonatomic) long long modelType;
@property (retain, nonatomic) NSString *modelName;
@property (readonly, nonatomic) unsigned long long clusterPruneThreshold;
@property (copy, nonatomic) id /* block */ shouldExcludeInteractionBlock;

/* instance methods */
- (id)initWithInteractionMechanisms:(id)mechanisms interactionCountMaxDepths:(id)depths interactionHistoryRelativeStartDates:(id)dates bundleIds:(id)ids modelType:(long long)type clusterPruneThreshold:(unsigned long long)threshold modelName:(id)name;
- (id)initWithInteractionMechanisms:(id)mechanisms interactionCountMaxDepths:(id)depths interactionHistoryRelativeStartDates:(id)dates bundleIds:(id)ids modelType:(long long)type clusterPruneThreshold:(unsigned long long)threshold modelName:(id)name shouldExcludeInteractionBlock:(id /* block */)block;
@end

#endif /* _PSKNNModelConfiguration_h */
