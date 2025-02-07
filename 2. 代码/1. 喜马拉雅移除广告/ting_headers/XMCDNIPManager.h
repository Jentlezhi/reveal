//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSMutableDictionary;

@interface XMCDNIPManager : NSObject
{
    NSMutableArray *_defaultCNDHost;
    NSLock *_cdnLock;
    NSMutableDictionary *_cdnIPDic;
}

+ (id)getIPWithHostName:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *cdnIPDic; // @synthesize cdnIPDic=_cdnIPDic;
@property(retain, nonatomic) NSLock *cdnLock; // @synthesize cdnLock=_cdnLock;
@property(retain, nonatomic) NSMutableArray *defaultCNDHost; // @synthesize defaultCNDHost=_defaultCNDHost;
- (void).cxx_destruct;
- (id)cdnModelUpdateCDNIPFromHost:(id)arg1;
- (void)requestCDNIP;
- (void)updataCDNIP;
- (id)getIPWithHostName:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

