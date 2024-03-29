//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CDKMMCSItemGroupContextDelegate_Protocol_h
#define CDKMMCSItemGroupContextDelegate_Protocol_h
@import Foundation;

@protocol CDKMMCSItemGroupContextDelegate 
/* instance methods */
- (BOOL)itemGroupContext:(id)context willGetMMCSItemReaderForItemID:(unsigned long long)id;
- (id)itemGroupContext:(id)context didGetItemReader:(id)reader itemID:(unsigned long long)id;
- (BOOL)itemGroupContext:(id)context willOpenItemReaderWriter:(id)writer error:(id *)error;
- (void)itemGroupContext:(id)context didOpenItemReaderWriter:(id)writer result:(BOOL)result error:(id)error;
- (BOOL)itemGroupContext:(id)context willCloseItemReaderWriter:(id)writer error:(id *)error;
- (void)itemGroupContext:(id)context didCloseItemReaderWriter:(id)writer result:(BOOL)result error:(id)error;
- (BOOL)itemGroupContext:(id)context willGetFileMetadataItemReaderWriter:(id)writer error:(id *)error;
- (id)itemGroupContext:(id)context didGetFileMetadataItemReaderWriter:(id)writer fileMetadata:(id)metadata error:(id)error;
- (BOOL)itemGroupContext:(id)context willReadFromItemReaderWriter:(id)writer offset:(unsigned long long)offset bytes:(char *)bytes length:(unsigned long long)length bytesRead:(unsigned long long *)read error:(id *)error;
- (BOOL)itemGroupContext:(id)context didReadFromItemReaderWriter:(id)writer offset:(unsigned long long)offset bytes:(char *)bytes length:(unsigned long long)length bytesRead:(unsigned long long *)read error:(id *)error;
@end

#endif /* CDKMMCSItemGroupContextDelegate_Protocol_h */
