//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString;

@interface NWIPv6Helper : NSObject
{
    int _v6_prefix_resolve_status;
    int _ip_type;
    NSRecursiveLock *_v6_prefix_lock;
    unsigned char _v6_prefix_length;
    NSString *_ipv4onlyArpa;
}

+ (_Bool)isIP:(const char *)arg1 withPrefixN:(unsigned char)arg2;
+ (_Bool)isIPv4address:(id)arg1;
+ (_Bool)deviceSystemIsLargeIOS9;
+ (id)sharedInstance;
@property(retain) NSString *ipv4onlyArpa; // @synthesize ipv4onlyArpa=_ipv4onlyArpa;
- (void).cxx_destruct;
- (unsigned char)resolveV6Prefix:(char *)arg1;
- (void)reset;
- (id)convertByPrefix:(id)arg1;
- (id)convertByOS:(id)arg1;
- (id)convertIPv4toIPv6:(id)arg1;
- (_Bool)isIPv6only;
- (id)init;

@end

