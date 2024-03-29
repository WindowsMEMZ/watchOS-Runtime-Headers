//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef _CNContactMatchingFetchRequestInfos_h
#define _CNContactMatchingFetchRequestInfos_h
@import Foundation;

@class NSArray, NSPredicate;

@interface _CNContactMatchingFetchRequestInfos : NSObject

@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *properties;

/* class methods */
+ (id)fetchRequestInfoForPredicate:(id)predicate properties:(id)properties;

/* instance methods */
@end

#endif /* _CNContactMatchingFetchRequestInfos_h */
