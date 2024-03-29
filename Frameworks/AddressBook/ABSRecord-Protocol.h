//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 12563.0.0.0.0
//
#ifndef ABSRecord_Protocol_h
#define ABSRecord_Protocol_h
@import Foundation;

@protocol ABSRecord <NSObject>

@property (readonly, nonatomic) int id;
@property (readonly, nonatomic) NSString *CNIdentifierString;
@property (readonly, nonatomic) unsigned int type;
@property (weak, nonatomic) ABSAddressBook *addressBook;
@property (weak, nonatomic) ABSSource *source;
@property (readonly, nonatomic) NSString *compositeName;
@property (retain, nonatomic) NSObject<ABSCNImplementation> *cnImpl;

/* instance methods */
- (void *)copyValueForProperty:(int)property;
- (BOOL)setValue:(void *)value forProperty:(int)property withError:(struct __CFError * *)error;
- (BOOL)removeProperty:(int)property withError:(id *)error;
- (void)replaceRecordStorageWithCNObject:(id)cnobject;
@end

#endif /* ABSRecord_Protocol_h */
