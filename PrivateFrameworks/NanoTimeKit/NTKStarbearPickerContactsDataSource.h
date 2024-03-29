//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKStarbearPickerContactsDataSource_h
#define NTKStarbearPickerContactsDataSource_h
@import Foundation;

@class CNContactStore, NCABContactStoreDataSource;

@interface NTKStarbearPickerContactsDataSource : NSObject {
  /* instance variables */
  CNContactStore *_store;
  NCABContactStoreDataSource *_dataSource;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)viewModel;
- (BOOL)acceptsComplicationFamily:(long long)family forDevice:(id)device;
- (BOOL)hasContacts;
@end

#endif /* NTKStarbearPickerContactsDataSource_h */
