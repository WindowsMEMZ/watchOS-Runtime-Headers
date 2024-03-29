//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFDataHolder_h
#define MFDataHolder_h
@import Foundation;

@class NSMutableArray;

@interface MFDataHolder : NSObject {
  /* instance variables */
  NSMutableArray *_datas;
}

@property (readonly, nonatomic) unsigned long long length;

/* class methods */
+ (id)dataHolder;
+ (id)dataHolderWithData:(id)data;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)addData:(id)data;
- (id)data;
- (void)enumerateDatasUsingBlock:(id /* block */)block;
- (void)enumerateByteRangesUsingBlock:(id /* block */)block;
- (unsigned long long)numberOfNewlinesNeedingConversion:(BOOL)conversion;
- (void)enumerateConvertingNewlinesUsingBlock:(id /* block */)block;
@end

#endif /* MFDataHolder_h */
