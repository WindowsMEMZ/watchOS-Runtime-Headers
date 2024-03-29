//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebCoreSharedBufferData_h
#define WebCoreSharedBufferData_h
@import Foundation;

#include "NSData.h"

@protocol {RefPtr<const WebCore::DataSegment, WTF::RawPtrTraits<const WebCore::DataSegment>, WTF::DefaultRefDerefTraits<const WebCore::DataSegment>>="m_ptr"^{DataSegment}};

@interface WebCoreSharedBufferData : NSData {
  /* instance variables */
  struct RefPtr<const WebCore::DataSegment, WTF::RawPtrTraits<const WebCore::DataSegment>, WTF::DefaultRefDerefTraits<const WebCore::DataSegment>> { struct DataSegment *m_ptr; } _dataSegment;
  unsigned long long _position;
  unsigned long long _size;
}

/* class methods */
+ (void)initialize;

/* instance methods */
- (void)dealloc;
- (id)initWithDataSegment:(const void *)segment position:(unsigned long long)position size:(unsigned long long)size;
- (unsigned long long)length;
- (const void *)bytes;
@end

#endif /* WebCoreSharedBufferData_h */
