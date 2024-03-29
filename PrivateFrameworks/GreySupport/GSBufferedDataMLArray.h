//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.0.4.0.0
//
#ifndef GSBufferedDataMLArray_h
#define GSBufferedDataMLArray_h
@import Foundation;

@class MLMultiArray, NSArray;

@interface GSBufferedDataMLArray : NSObject {
  /* instance variables */
  long long _size;
  long long _count;
  float * _data;
  long long _dataIndex;
  NSArray *_shape;
  NSArray *_strides;
}

@property (readonly, nonatomic) MLMultiArray *multiArray;
@property (readonly, nonatomic) unsigned long long elementCount;

/* class methods */
+ (id)mlArrayAs2dArray:(id)array;

/* instance methods */
- (id)initWithTargetSize:(unsigned long long)size elementCount:(unsigned long long)count;
- (void)dealloc;
- (void)_copyBuffer:(float *)buffer index:(unsigned long long)index;
- (void)writeElement:(float *)element;
- (float *)_floatPtr;
- (void)copyElement:(float *)element offset:(long long)offset;
- (void)reset;
- (id)stringFormattedDataBufferAs2dArray;
- (id)dataBufferAs2dArray;
@end

#endif /* GSBufferedDataMLArray_h */
