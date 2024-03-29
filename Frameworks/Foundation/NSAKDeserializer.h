//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSAKDeserializer_h
#define NSAKDeserializer_h
@import Foundation;

@interface NSAKDeserializer : NSObject {
  /* instance variables */
  id ds;
}

/* instance methods */
- (id)initForDeserializerStream:(id)stream;
- (void)dealloc;
- (id)deserializerStream;
- (id)deserializeNewObject;
- (id)deserializeNewData;
- (id)deserializeData:(id)data;
- (id)deserializeNewString;
- (id)deserializeNewKeyString;
- (id)deserializeString:(id)string;
- (id)deserializeNewList;
- (id)deserializeList:(id)list;
- (id)deserializeListItemIn:(id)in at:(unsigned long long)at length:(unsigned long long)length;
- (id)deserializeNewPList;
- (id)deserializePList:(id)plist;
- (id)deserializePListKeyIn:(id)in;
- (id)deserializePListValueIn:(id)in key:(id)key length:(unsigned long long)length;
@end

#endif /* NSAKDeserializer_h */
