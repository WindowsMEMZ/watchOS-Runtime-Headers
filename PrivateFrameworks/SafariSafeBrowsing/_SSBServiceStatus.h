//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7617.1.17.12.4
//
#ifndef _SSBServiceStatus_h
#define _SSBServiceStatus_h
@import Foundation;

@class NSArray, NSString;
@protocol {ServiceStatus="m_name"{basic_string<char, std::char_traits<char>, std::allocator<char>>="__r_"{__compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>="__value_"{__rep=""(?="__l"{__long="__data_"*"__size_"Q"__cap_"b63"__is_long_"b1}"__s"{__short="__data_"[23c]"__padding_"[0C]"__size_"b7"__is_long_"b1}"__r"{__raw="__words"[3Q]})}}}"m_pid"i"m_activeTransactions"{vector<std::string, std::allocator<std::string>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<std::string *, std::allocator<std::string>>="__value_"^v}}"m_connections"{vector<SafeBrowsing::ServiceStatus::Connection, std::allocator<SafeBrowsing::ServiceStatus::Connection>>="__begin_"^{Connection}"__end_"^{Connection}"__end_cap_"{__compressed_pair<SafeBrowsing::ServiceStatus::Connection *, std::allocator<SafeBrowsing::ServiceStatus::Connection>>="__value_"^{Connection}}}"m_databaseUpdatersStatuses"{vector<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus, std::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>>="__begin_"^{DatabaseUpdaterStatus}"__end_"^{DatabaseUpdaterStatus}"__end_cap_"{__compressed_pair<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus *, std::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>>="__value_"^{DatabaseUpdaterStatus}}}};

@interface _SSBServiceStatus : NSObject {
  /* instance variables */
  struct ServiceStatus { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned int x :63 __cap_; unsigned int x :1 __is_long_; } __l; struct __short { char x[23] __data_; unsigned char x[0] __padding_; unsigned int x :7 __size_; unsigned int x :1 __is_long_; } __s; struct __raw { unsigned long long x[3] __words; } __r; } x0; } __value_; } __r_; } m_name; int m_pid; struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *__value_; } __end_cap_; } m_activeTransactions; struct vector<SafeBrowsing::ServiceStatus::Connection, std::allocator<SafeBrowsing::ServiceStatus::Connection>> { struct Connection *__begin_; struct Connection *__end_; struct __compressed_pair<SafeBrowsing::ServiceStatus::Connection *, std::allocator<SafeBrowsing::ServiceStatus::Connection>> { struct Connection *__value_; } __end_cap_; } m_connections; struct vector<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus, std::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> { struct DatabaseUpdaterStatus *__begin_; struct DatabaseUpdaterStatus *__end_; struct __compressed_pair<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus *, std::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> { struct DatabaseUpdaterStatus *__value_; } __end_cap_; } m_databaseUpdatersStatuses; } _serviceStatus;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) int processIdentifier;
@property (readonly, copy, nonatomic) NSArray *activeTransactions;
@property (readonly, nonatomic) NSArray *databaseUpdatersStatuses;
@property (readonly, nonatomic) unsigned long long connectionCount;
@property (readonly, nonatomic) unsigned long long databaseUpdaterState;

/* instance methods */
- (id)initWithServiceStatus:(struct ServiceStatus { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x0; int x1; struct vector<std::string, std::allocator<std::string>> { void * x0; void * x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void * x0; } x2; } x2; struct vector<SafeBrowsing::ServiceStatus::Connection, std::allocator<SafeBrowsing::ServiceStatus::Connection>> { struct Connection * x0; struct Connection * x1; struct __compressed_pair<SafeBrowsing::ServiceStatus::Connection *, std::allocator<SafeBrowsing::ServiceStatus::Connection>> { struct Connection * x0; } x2; } x3; struct vector<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus, std::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> { struct DatabaseUpdaterStatus * x0; struct DatabaseUpdaterStatus * x1; struct __compressed_pair<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus *, std::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> { struct DatabaseUpdaterStatus * x0; } x2; } x4; })status;
- (int)processIdentifierForConnectionAtIndex:(unsigned long long)index;
- (id)bundleIdentifierForConnectionAtIndex:(unsigned long long)index;
@end

#endif /* _SSBServiceStatus_h */
