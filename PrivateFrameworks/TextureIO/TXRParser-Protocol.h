//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.10.10.0.0
//
#ifndef TXRParser_Protocol_h
#define TXRParser_Protocol_h
@import Foundation;

@protocol TXRParser <NSObject>

@property (readonly, nonatomic) TXRTextureInfo *textureInfo;

/* class methods */
+ (BOOL)handlesData:(id)data;
/* instance methods */
- (id)parsedImageAtLevel:(unsigned long long)level element:(unsigned long long)element face:(unsigned long long)face;
- (BOOL)parseData:(id)data bufferAllocator:(id)allocator options:(id)options error:(id *)error;
@end

#endif /* TXRParser_Protocol_h */
