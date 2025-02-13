//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DNSUrlDomainItem, NSMutableSet, NSString, NSURL;

@protocol HttpDnsExtensionProtocol <NSObject>

@optional
- (_Bool)isNeedHost;
- (DNSUrlDomainItem *)convertUrl:(NSURL *)arg1 previousHosts:(NSMutableSet *)arg2;
- (_Bool)libBackupTried;
- (void)notifySuccess:(NSString *)arg1;
- (void)notifyFailWithIpUrl:(NSURL *)arg1 domain:(NSString *)arg2 error:(NSString *)arg3;
- (NSString *)getIpHostFromUrl:(NSURL *)arg1;
- (NSString *)originDomain;
@end

