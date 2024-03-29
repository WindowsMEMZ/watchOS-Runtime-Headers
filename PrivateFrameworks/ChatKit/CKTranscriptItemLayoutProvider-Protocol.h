//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKTranscriptItemLayoutProvider_Protocol_h
#define CKTranscriptItemLayoutProvider_Protocol_h
@import Foundation;

@protocol CKTranscriptItemLayoutProvider 

@property (readonly, nonatomic) Class chatItemClass;
@property (readonly, copy, nonatomic) NSString *layoutGroupIdentifier;

/* instance methods */
- (id)layoutItemWithEnvironment:(id)environment datasourceItemIndex:(long long)index allDatasourceItems:(id)items;
- (id)layoutItemSpacingWithEnvironment:(id)environment datasourceItemIndex:(long long)index allDatasourceItems:(id)items supplementryItems:(id)items;
@end

#endif /* CKTranscriptItemLayoutProvider_Protocol_h */
