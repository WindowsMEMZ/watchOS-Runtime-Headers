//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLIndexMapperDataSource_Protocol_h
#define PLIndexMapperDataSource_Protocol_h
@import Foundation;

@protocol PLIndexMapperDataSource <NSObject>

@property (readonly, copy, nonatomic) NSIndexSet *filteredIndexes;

/* instance methods */
- (BOOL)shouldIncludeObjectAtIndex:(unsigned long long)index;
@end

#endif /* PLIndexMapperDataSource_Protocol_h */
