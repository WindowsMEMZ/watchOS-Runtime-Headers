//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _EFOrderedCollection_Protocol_h
#define _EFOrderedCollection_Protocol_h
@import Foundation;

@protocol _EFOrderedCollection <NSObject>

@property (readonly, nonatomic) unsigned long long count;

/* instance methods */
- (id)ef_subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)objectAtIndexedSubscript:(unsigned long long)subscript;
@end

#endif /* _EFOrderedCollection_Protocol_h */
