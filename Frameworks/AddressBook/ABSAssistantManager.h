//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 12563.0.0.0.0
//
#ifndef ABSAssistantManager_h
#define ABSAssistantManager_h
@import Foundation;

#include "ABSAddressBook.h"

@interface ABSAssistantManager : NSObject

@property (readonly, nonatomic) ABSAddressBook *addressBook;

/* instance methods */
- (id)init;
- (id)initWithAddressBook:(id)book;
- (id)newSAPersonFromABPerson:(void *)abperson;
@end

#endif /* ABSAssistantManager_h */
