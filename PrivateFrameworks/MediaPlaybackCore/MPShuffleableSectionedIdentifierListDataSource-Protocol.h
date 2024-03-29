//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPShuffleableSectionedIdentifierListDataSource_Protocol_h
#define MPShuffleableSectionedIdentifierListDataSource_Protocol_h
@import Foundation;

@protocol MPShuffleableSectionedIdentifierListDataSource <MPSectionedIdentifierListDataSource>
/* instance methods */
- (BOOL)section:(id)section supportsShuffleType:(long long)type;
@optional
/* instance methods */
- (BOOL)section:(id)section shouldShuffleExcludeItem:(id)item;
@end

#endif /* MPShuffleableSectionedIdentifierListDataSource_Protocol_h */
