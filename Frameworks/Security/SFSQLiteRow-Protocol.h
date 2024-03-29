//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 61040.64.1.0.0
//
#ifndef SFSQLiteRow_Protocol_h
#define SFSQLiteRow_Protocol_h
@import Foundation;

@protocol SFSQLiteRow <NSObject>
/* instance methods */
- (unsigned long long)columnCount;
- (int)columnTypeAtIndex:(unsigned long long)index;
- (id)columnNameAtIndex:(unsigned long long)index;
- (unsigned long long)indexForColumnName:(id)name;
- (int)intAtIndex:(unsigned long long)index;
- (long long)int64AtIndex:(unsigned long long)index;
- (double)doubleAtIndex:(unsigned long long)index;
- (id)blobAtIndex:(unsigned long long)index;
- (id)textAtIndex:(unsigned long long)index;
- (id)objectAtIndex:(unsigned long long)index;
- (id)allObjects;
- (id)allObjectsByColumnName;
@end

#endif /* SFSQLiteRow_Protocol_h */
