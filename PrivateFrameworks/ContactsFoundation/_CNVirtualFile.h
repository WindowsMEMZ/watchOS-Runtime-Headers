//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef _CNVirtualFile_h
#define _CNVirtualFile_h
@import Foundation;

@class NSData, NSMutableDictionary;

@interface _CNVirtualFile : NSObject

@property (copy) NSData *contents;
@property (readonly) NSMutableDictionary *extendedAttributes;

/* instance methods */
- (id)init;
@end

#endif /* _CNVirtualFile_h */
